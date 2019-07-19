/* 
* max7219.h
*
* Created: 01.07.2019 19:38:28
* Author: Reiter R.
*/

#ifndef _MAX7219_H_
#define _MAX7219_H_
#include <SPI.h>

enum reg {noop=0, digit0=1, digit1=2, digit2=3, digit3=4, digit4=5, digit5=6, digit6=7, digit7=8,decodemode=9, intensity=10, scanlimit=11, shutwown=12, displaytest=15};

namespace MAX7219
{
  class Segment
  {
    private:
    void displayTest(uint8_t _time=300);
    double roundNumber(double _number, uint8_t _decimals);
    void sendData(reg _reg, uint8_t _data);
    public:
    Segment();
    void setIntensity(uint8_t _intensity=1);
    void printNumber(double _number, uint8_t _decimals=0);
    
    void blankDisplay();
    ~Segment();
  };

  class Matrix8x8
  {
    private:
    void setIntensity(uint8_t _intensity=1);
    void setRegister(reg _reg, uint8_t _data);
    uint8_t displaySize;
    uint64_t layout[8];
    uint8_t **buffer;
    uint64_t reverseLayout[8];
    void writeLayoutIntoBuffer();
    void clearLayout();
    void clearBuffer();
    void printScrollDisplay(int8_t _invert);
    void writereverseLayoutIntoBuffer();
    uint8_t reverseArray[8];
    uint8_t arrayBuffer[8];
    void reverseLayoutt();
    void clearReverseLayout();
    void writeModifiedArrayIntoLayout(uint8_t * _array, uint8_t tt ,int8_t _shift);
    void writeByteIntoLayout(uint64_t _byte,int8_t _row, int8_t _shift, int8_t _invert);
    void writeArrayIntoLayout(char * _array, int8_t _shift=0, char _inversetion='n', int8_t _invert=0, uint8_t _ascitable=0, uint8_t _offset=0);
    void printScrollArray(uint8_t * _ari, uint8_t _speed, int8_t _invert=0);

    public:
    Matrix8x8(uint8_t _displaySize=1);
    void displayTest(uint16_t _time);
    void writeByte(uint64_t _byte, int8_t _row=0, int8_t _shift=0, int8_t _invert=0);
    void writeArray(char * _array, int8_t _shift=0, char _inversetion='n', int8_t _invert=0, uint8_t _offset=0);
    void writeChar(char _char, int8_t _shift=0, char _inversetion='n', int8_t _invert=0, uint8_t _offset=0);
    void printScrollText(char * _text, uint8_t _speed=80, int8_t _invert=0);
    void blankDisplay();
    void printDisplay();
    ~Matrix8x8();
  }; 
}
#endif //_MATRIX8X8_H_
