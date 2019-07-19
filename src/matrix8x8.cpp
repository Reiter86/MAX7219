/* 
* matrix8x8.cpp
*
* Created: 01.07.2019 19:38:28
* Author: Reiter R.
*/

#include "max7219.h"
#include "utility/font8x8.h"

MAX7219::Matrix8x8::Matrix8x8(uint8_t _displaySize)
{
  pinMode(SS, OUTPUT);
  SPI.begin();
  SPI.setBitOrder(MSBFIRST);
  SPI.setDataMode(SPI_MODE0);
  SPI.setClockDivider(SPI_CLOCK_DIV64);

  displaySize = _displaySize;
  
  buffer=(uint8_t**)malloc(_displaySize*sizeof (uint8_t*));

  for (int8_t i=0;i<_displaySize;i++)
  {
    *(buffer+i)=(uint8_t*)malloc(8*sizeof (uint8_t));
  }
  

  setRegister(scanlimit, 0x07);     
  setRegister(shutwown, 0x01);      
  setRegister(decodemode, 0x00);   
  displayTest(300);
  setIntensity();
  blankDisplay();          
}


void MAX7219::Matrix8x8::displayTest(uint16_t _time)
{
  setRegister(displaytest, 0x01); 
 
  //delay((uint64_t )300);
           
  setRegister(displaytest, 0x00); 
}


void MAX7219::Matrix8x8::setIntensity(uint8_t _intensity)
{
  digitalWrite(SS,LOW);
 
  for(int8_t i=(displaySize-1);i>=0;i--)
  {
    SPI.transfer(intensity);
    SPI.transfer(_intensity);
  }
  digitalWrite(SS,HIGH);
}


void MAX7219::Matrix8x8::setRegister(reg _reg, uint8_t _data)
{
  digitalWrite(SS,LOW);
  
  for(int8_t i=(displaySize-1);i>=0;i--)
  {
    SPI.transfer(_reg);
    SPI.transfer(_data);
  }
  digitalWrite(SS,HIGH);
}


void MAX7219::Matrix8x8::writeByteIntoLayout(uint64_t _byte,int8_t _row, int8_t _shift, int8_t _invert)
{ 
  if(!_invert)
  {
    uint8_t z=0;
    for(int8_t i=7,k=0; i>-1;i--,k++)
    {
      z |= (((_byte>>k) & (0b00000001)) <<i);
    }
    *(layout+_row)|=(uint64_t)(z<<_shift);
  } 
  else
  {
    *(layout+_row)|=(uint64_t)(_byte<<_shift);
  }
}


void MAX7219::Matrix8x8::writeByte(uint64_t _byte, int8_t _row, int8_t _shift, int8_t _invert)
{ 
  if(!_invert)
  {
    uint8_t z=0;
    for(int8_t i=7,k=0; i>-1;i--,k++)
    {
      z |= (((_byte>>k) & (0b00000001)) <<i);
    }
    *(layout+_row)|=(uint64_t)(z<<_shift);
  } 
  else
  {
    *(layout+_row)|=(uint64_t)(_byte<<_shift);
  }
}


void MAX7219::Matrix8x8::writeModifiedArrayIntoLayout(uint8_t* _array,uint8_t tt ,int8_t _shift)
{
  for (int8_t i=tt;i<8;i++)
  {
    *(layout+i)|=((uint64_t)*(_array+i))<<_shift;
  }
}


void MAX7219::Matrix8x8::clearLayout(){
  
  for(int8_t i=0; i<8;i++)
  {
    *(layout+i) = 0;
  }
}


void MAX7219::Matrix8x8::clearBuffer()
{
  for(int8_t i=displaySize-1; i>-1;i--)
  {
    for(int8_t j=0; j<8;j++)
    {
      buffer[i][j] = 0;
    }
  }
}


void MAX7219::Matrix8x8::blankDisplay()
{
  for(int8_t m=1; m<9;m++)
  {
    digitalWrite(SS,LOW);
   
    for(int8_t i=(displaySize-1);i>=0;i--)
    {
      SPI.transfer(m);
      SPI.transfer(0x00);
    }
    digitalWrite(SS,HIGH);
  }
}


void MAX7219::Matrix8x8::writeLayoutIntoBuffer()
{
  for (int8_t i=0 ; i<8;i++)
  {
    for(int8_t j=0; j<displaySize;j++)
    {
      buffer[j][i]|=(uint8_t)(layout[i]>>(j*8));
    } 
  }
}


void MAX7219::Matrix8x8::reverseLayoutt()
{
  for(int8_t u=0; u<8;u++)
  {
    for(int i=(displaySize*8)-1 ,k=0; i>-1;i--,k++)
    {
      reverseLayout[u] |= (((layout [u]>>k) & uint64_t(1)) <<i);
    }
  }
}


void MAX7219::Matrix8x8::writereverseLayoutIntoBuffer()
{
  reverseLayoutt();

  for (int8_t i=0 ; i<8;i++)
  {
    for(int8_t j=0; j<displaySize;j++)
    {
      buffer[j][i]|=(uint8_t)(reverseLayout[i]>>(j*8));
    } 
  }
  clearReverseLayout();
}



void MAX7219::Matrix8x8::clearReverseLayout()
{
  for(int8_t i=0; i<8;i++)
  {
    *(reverseLayout+i) = 0;
  }
}


void MAX7219::Matrix8x8::printDisplay()
{
  writeLayoutIntoBuffer();
  for(int8_t i=1,j=7;j>-1;i++,j--)
  {
    digitalWrite(SS,LOW);
    
    for(int8_t k=displaySize,m=displaySize-1;k>0;k--,m--)
    {
      SPI.transfer(i);
      SPI.transfer(buffer[((m))][j]);
    }
    digitalWrite(SS,HIGH);
  }
  clearLayout();
  clearBuffer();
}



void MAX7219::Matrix8x8::printScrollArray(uint8_t * _ari,uint8_t _speed, int8_t _invert)
{
  if(!_invert){
    for(int i=0;i<8;i++)
    {
      reverseArray[i]=0; 
    }
    if(_ari[7]==6)
    {
      for(int u=0; u<7;u++)
      {
        for(int i=8-_ari[7]+1, j=-4; i<8;i++)
        {
          if(j<=0)
          {
            reverseArray[u] |= (_ari[u] & (0b00000001<<i))<<abs(j);
          }
          else
          {
            reverseArray[u] |= (_ari[u] & (0b00000001<<i))>>abs(j);
          }
          j+=2;
        }
        
      }
      reverseArray[7] = _ari[7];
    }
  }
  
    /*
      printf("%d\n",(((t>>0) & (0b00000001)) <<7));
      printf("%d\n",(((t>>1) & (0b00000001)) <<6));
      printf("%d\n",(((t>>2) & (0b00000001)) <<5));
      printf("%d\n",(((t>>3) & (0b00000001)) <<4));
      printf("%d\n",(((t>>4) & (0b00000001)) <<3));
      printf("%d\n",(((t>>5) & (0b00000001)) <<2));
      printf("%d\n",(((t>>6) & (0b00000001)) <<1));
      printf("%d\n",(((t>>7) & (0b00000001)) <<0));
    */
    
  if(_ari[7]==5)
  {
    for(int u=0; u<7;u++)
    {
      reverseArray[u] |= (_ari[u] & (0b00000001<<4))<<3;
      reverseArray[u] |= (_ari[u] & (0b00000001<<5))<<2;
      reverseArray[u] |= (_ari[u] & (0b00000001<<6))>>1;
      reverseArray[u] |= (_ari[u] & (0b00000001<<7))>>3;  
    }
      reverseArray[7] = _ari[7];
  }
  
  if(_ari[7]==4)
  {
      for(int u=0; u<7;u++)
      {
        reverseArray[u] |= (_ari[u] & (0b00000001<<5))<<2;
        reverseArray[u] |= (_ari[u] & (0b00000001<<6))<<0;
        reverseArray[u] |= (_ari[u] & (0b00000001<<7))>>2;  
      }
      reverseArray[7] = _ari[7];
  }

  if(_ari[7]==3)
  {
      for(int u=0; u<7;u++)
      {     
        reverseArray[u] |= (_ari[u] & (0b00000001<<6))<<1;
        reverseArray[u] |= (_ari[u] & (0b00000001<<7))>>1;  
      }
      reverseArray[7] = _ari[7];
  }

  if(_ari[7]==2)
  {
      for(int u=0; u<7;u++)
      {     
        reverseArray[u] |= _ari[u] ;
      }
      reverseArray[7] = _ari[7];
  }
    

  for(int i=8-_ari[7];i<8;i++)
  {  
    for(int k=0;k<7;k++) 
    {
      if(!_invert)
      {
        layout[k]|=(reverseArray[k]>>i)&0b00000001;
      }
      else
      {
        layout[k]|=(_ari[k]>>i)&0b00000001;
      }
    }
    
    printScrollDisplay(_invert);
   
    for(int k=0;k<8;k++) 
    {
      layout[k]<<=1;
    }
    delay(_speed);
  }
}

void MAX7219::Matrix8x8::printScrollDisplay(int8_t _invert)
{
  if(!_invert)
  {
    writereverseLayoutIntoBuffer();
  }
  else
  {
    writeLayoutIntoBuffer(); 
  }
  
  for(int8_t i=1,j=7;j>-1;i++,j--)
  {
    digitalWrite(SS,LOW);
    
    for(int8_t k=displaySize,m=displaySize-1;k>0;k--,m--)
    {
      SPI.transfer(i);
      SPI.transfer(buffer[((m))][j]);
    }
    digitalWrite(SS,HIGH);
  }
  clearBuffer();
}


void MAX7219::Matrix8x8::printScrollText(char * _text,uint8_t _speed, int8_t _invert)
{
  int index_=0;
  
    while(_text[index_]!='\0') 
    {
      printScrollArray(ascii[_text[index_++]-32],_speed,_invert);
    }
}




void MAX7219::Matrix8x8::writeArrayIntoLayout(char * _array, int8_t _shift, char _inversetion, int8_t _invert, uint8_t _ascitable, uint8_t _offset)
{
//inverse: yes=0 no=1
//inversetion: left='l'  right='r'  headsUp='h'

  int i,k,j,m,x,y;
  int * a,* b;

    for(int i=0;i<8;i++)
    {
      arrayBuffer[i]=0;
    }


  switch(_inversetion) 
  {
    case 'r':
      b=&i;
      y=1;
        if(_invert==0)
        {
          a=&m;
          x=8-_array[7];
        }
        else
        {
          a=&k;
          x=-1;
        }
    break;
    
    case 'h': 
      a=&j;
      x=-1;
        if(_invert==0)
        {
          b=&m;
          y=(8-_array[7])+1;
        }
        else
        {
        b=&k;
        y=0;
        }
    break;
    
    case 'l': 
      b=&j;
      y=0;
        if(_invert==0)
        {
          a=&k;
          x=-1;
        }
        else
        {
          a=&m;
          x=8-_array[7];
        }
    break;
    
    case 'n': 
      a=&i;
      x=0;
        if(_invert==0)
        {
          b=&k;
          y=0;
        }
        else
        {
          b=&m;
          y=(8-_array[7])+1;
        }
    break;
    
    default: 
      a=&i;
      x=0;
      b=&k;
    break;
  } 
    
  for ( i=0,j=7; i<8-_ascitable ; i++,j--)
  {
    for (k=0,m=7 ; k<8 ; k++,m--)
    {
      arrayBuffer[(*a)+x-_offset] |= ((_array[i]<<m)&(0b10000000))>>(*b)+y; 
    }
  }
  writeModifiedArrayIntoLayout(arrayBuffer,0 ,_shift);
}

void MAX7219::Matrix8x8::writeArray(char * _array, int8_t _shift, char _inversetion, int8_t _invert, uint8_t _offset){
//inverse: ja=0 nein=1
//richtung: links='l'  rechts='r'  kopf='h'

  int i,k,j,m,x,y;
  int * a,* b;

  for(int i=0;i<8;i++)
  {
    arrayBuffer[i]=0;
  }


   switch(_inversetion) 
   {
    case 'r':
      b=&i;
      y=0;
        if(_invert==0)
        {
          a=&m;
          x=0;
        }else
        {
          a=&k;
          x=0;
        }
    break;
    
    case 'h': 
      a=&j;
      x=0;
        if(_invert==0)
        {
          b=&m;
          y=0;
        }
        else
        {
          b=&k;
          y=0;
        }
    break;
    
    case 'l': 
      b=&j;
      y=0;
        if(_invert==0)
        {
          a=&k;
          x=0;
        }
        else
        {
          a=&m;
          x=0;
        }
    break;
    
    case 'n': 
      a=&i;
      x=0;
        if(_invert==0)
        {
          b=&k;
          y=0;
        }
        else
        {
          b=&m;
          y=(8-_array[7])+1;
        }
    break;
    
    default: 
      a=&i;
      x=0;
      b=&k;
      break;
  } 
    
  for ( i=0,j=7; i<8 ; i++,j--)
  {
    for (k=0,m=7 ; k<8 ; k++,m--)
    {
      arrayBuffer[(*a)+x-_offset] |= ((_array[i]<<m)&(0b10000000))>>(*b)+y; 
    }
  }
  writeModifiedArrayIntoLayout(arrayBuffer,0 ,_shift);
}

void MAX7219::Matrix8x8::writeChar(char _char, int8_t _shift, char _inversetion, int8_t _invert, uint8_t _offset)
{
//inverse: ja=0 nein=1
//richtung: links='l'  rechts='r'  kopf='h'

  char * _array =(char*) ascii[_char-32];
  int i,k,j,m,x,y;
  int * a,* b;

  for(int i=0;i<8;i++)
  {
    arrayBuffer[i]=0;
  }


  switch(_inversetion) 
  {
    case 'r':
      b=&i;
      y=1;
        if(_invert==0)
        {
           a=&m;
          x=8-_array[7];
        }
        else
        {
          a=&k;
          x=-1;
        }
    break;
    
    case 'h': 
      a=&j;
      x=-1;
        if(_invert==0)
        {
          b=&m;
          y=(8-_array[7])+1;
        }else
        {
          b=&k;
          y=0;
        }
    break;
    
  case 'l': 
    b=&j;
    y=0;
      if(_invert==0)
      {
        a=&k;
        x=-1;
      }
      else
      {
        a=&m;
        x=8-_array[7];
      }
   break;
    
   case 'n': 
    a=&i;
    x=0;
      if(_invert==0)
      {
        b=&k;
        y=0;
      }
      else
      {
        b=&m;
        y=(8-_array[7])+1;
      }
    break;
    
    default: 
      a=&i;
      x=0;
      b=&k;
    break;
  } 
   
  for ( i=0,j=7; i<7 ; i++,j--)
  {
    for (k=0,m=7 ; k<8 ; k++,m--)
    {
      arrayBuffer[(*a)+x-_offset] |= ((_array[i]<<m)&(0b10000000))>>(*b)+y; 
    }
  }
  writeModifiedArrayIntoLayout(arrayBuffer,0 ,_shift);
}


MAX7219::Matrix8x8::~Matrix8x8()
{
} //~MAX7219::Matrix8x8
