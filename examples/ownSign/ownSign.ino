#include <max7219.h>


//own signs arrays
uint8_t smiley1[8] = {

  B00111100,
  B01000010,
  B10100101,
  B10000001,
  B10100101,
  B10011001,
  B01000010,
  B00111100
};

uint8_t smiley2[8] = {

  B00000000,
  B00101000,
  B00101000,
  B00101000,
  B00000000,
  B01000100,
  B00111000,
  B00000000
};


uint8_t pacman[8] = {
B00111000,
  B01000100,
  B10001000,
  B10010010,
  B10001000,
  B01000100,
  B00111000,
  B00000000
  };

uint8_t deadman[8] = {
  B01111100,
  B01000100,
  B01001010,
  B01000100,
  B01001110,
  B01000100,
  B01001010,
  B10100000
 }; 
 
//Create an object from Matrix8x8 with 4 8x8-Matrix fields
MAX7219::Matrix8x8 myMatrix8x8(4);

void setup() 
{  

}

void loop() 
{
  
  //write the arrays in the buffer
  myMatrix8x8.writeArray(smiley1,0);
  myMatrix8x8.writeArray(smiley2,9);
  myMatrix8x8.writeArray(pacman,17);
  myMatrix8x8.writeArray(deadman,24);

  //print or refresh buffer / print the Matrix field	
  myMatrix8x8.printDisplay();
    
}
