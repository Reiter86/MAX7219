#include <max7219.h>

//Create an object from Matrix8x8 with 4 8x8-Matrix fields
MAX7219::Matrix8x8 myMatrix8x8(4);

////Create a string for print
char str [] ="Hello World! ";

void setup() 
{  

}

void loop() 
{

  //print the string 
  myMatrix8x8.printScrollText(str);     
}
