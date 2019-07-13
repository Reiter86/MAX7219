/* 
* segment.cpp
*
* Created: 01.07.2019 19:38:28
* Author: Reiter R.
*/

#include "max7219.h"


MAX7219::Segment::Segment(){
 
  pinMode(SS, OUTPUT);
  SPI.begin();
  SPI.setBitOrder(MSBFIRST);
  SPI.setDataMode(SPI_MODE0);
  SPI.setClockDivider(SPI_CLOCK_DIV64);
  sendData(scanlimit, 0x07);     
  sendData(shutwown, 0x01);      
  sendData(decodemode, 0xFF);    
}

void MAX7219::Segment::setIntensity(uint8_t _intensity)
{
  digitalWrite(SS,LOW);
    SPI.transfer(intensity);
    SPI.transfer(_intensity);
  digitalWrite(SS,HIGH);
}

void MAX7219::Segment::sendData(reg _reg, uint8_t _data)
{
  digitalWrite(SS,LOW);
    SPI.transfer(_reg);
    SPI.transfer(_data);
  digitalWrite(SS,HIGH);
}


void MAX7219::Segment::blankDisplay()
{
  for(int8_t i=1;i<9;i++)
  {
    sendData((reg)i,15); 
  }
}


double MAX7219::Segment::roundNumber(double _number, uint8_t _decimals)
{
  for(int8_t i=3;i>_decimals-1;i--)
  {
    _number= ( round( _number*pow(10,i) ) )  /  pow(10,i);
    Serial.print("funk ");
    Serial.print(i);
    Serial.print(" :");
    Serial.println(_number,_decimals); 
  }
  return _number;
}


void MAX7219::Segment::printNumber(double _number, uint8_t _decimals)
{
  uint8_t sign_=(_number>-1)?1:0;

  _number=fabs(_number);
  
  Serial.print("bevore round number:");
  Serial.println(_number,_decimals);                                                       
 _number=(_decimals)?roundNumber(_number,_decimals):round(_number);
  Serial.print("rounded number:");
  Serial.println(_number,_decimals);
  char * numberStr_=(char*)malloc(15*sizeof (char));
  uint8_t pointIndex_=0;
  //ftoa(_number, numberStr_, _decimals);
  dtostrf(_number,12, _decimals, numberStr_);
  //sprintf(numberStr_, "%d",(int) _number);
    for(int8_t i=0,j=!sign_;i<14;i++)
    {
        if(numberStr_[i]==46||(numberStr_[i]>=48 && numberStr_[i]<=57))
        {
            numberStr_[j]=numberStr_[i];
            j+=1;
        }
        numberStr_[i]=0;
    }
    
  numberStr_[0]=(sign_)?numberStr_[0]:0xA;
    Serial.print("Stringnumber=");
    Serial.println((char*)numberStr_);
    Serial.print("Stringnumber1=");
    Serial.println(numberStr_[0]);
    Serial.print("Stringnumber2=");
    Serial.println((char)numberStr_[1]);
    Serial.print("Stringnumber3=");
    Serial.println((char)numberStr_[2]);
    for(int8_t k=0;*(numberStr_+k)!=0||k<9;k++)
    {
        
        if(*(numberStr_+k)=='.')
        {
            pointIndex_=k;
            numberStr_[k]=(_decimals>0)?(int8_t)numberStr_[k-1]+0x80:(int8_t)numberStr_[k-1];
        }
        
        if(pointIndex_)
        {
            numberStr_[k-1]=numberStr_[k];
        }
        else
        {
            numberStr_[k]=numberStr_[k];
        }
    }
    
    Serial.print("pointIndex=");
    Serial.println(pointIndex_);
    Serial.print("pointindex1_+_dezis= ");
    Serial.println(pointIndex_+_decimals);
    Serial.print("strlen=");
    Serial.println(strlen(numberStr_));
              
    if(strlen(numberStr_)<10)
    {   
        for(int8_t i=0,j=8;i<8;i++,j--)
        {
          sendData((reg)j,(i<strlen(numberStr_))?numberStr_[i]:15);
         
          Serial.println((int8_t)numberStr_[i]-48);           
        }
    }
    else
    {
        sendData((reg)1,'\15');
        sendData((reg)2,'\0');
        sendData((reg)3,15);
        sendData((reg)4,15);
        sendData((reg)5,15);
        sendData((reg)6,15);
        sendData((reg)7,15);
        sendData((reg)8,15); 
    }    
    free(numberStr_);
    delay(300);
} 


MAX7219::Segment::~Segment(){
  
}
