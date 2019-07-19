#include <max7219.h>


//Create an object from Matrix8x8 with 4 8x8-Matrix fields
MAX7219::Matrix8x8 myMatrix8x8(4);

void setup() 
{  

}

void loop() 
{
  //Put a ASCII-Char-array on different positions
  myMatrix8x8.writeChar('H',0);
  myMatrix8x8.writeChar('i',6);
  myMatrix8x8.writeChar(',',10);
  myMatrix8x8.writeChar(' ',9);
  myMatrix8x8.writeChar('Y',15);
  myMatrix8x8.writeChar('o',21);
  myMatrix8x8.writeChar('u',27);
  
  //print/show chars
  myMatrix8x8.printDisplay();
}
