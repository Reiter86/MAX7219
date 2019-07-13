#include <max7219.h>


//Create an object from Matrix8x8 with 4 8x8-Matrix fields
MAX7219::Matrix8x8 myMatrix8x8(4);


void setup() 
{  

}

void loop() 
{
  //print a byte int the
  myMatrix8x8.writeByte(0b11001111);

  myMatrix8x8.printDisplay();
}
