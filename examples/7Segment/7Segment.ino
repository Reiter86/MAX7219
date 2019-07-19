#include <max7219.h>

//Create an object from Segment
MAX7219::Segment mySegment;

void setup() 
{  
   Serial.begin(9600);
}
 
void loop() 
{
  
  double number=57989.456445;

  //show the number with 2 decimals on the display 
  mySegment.printNumber(number,2);

}
