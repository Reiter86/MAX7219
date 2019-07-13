[![Build Status](https://travis-ci.com/Reiter86/MAX7219.svg?branch=master)](https://travis-ci.com/Reiter86/MAX7219)

# [MAX7219](https://datasheets.maximintegrated.com/en/ds/MAX7219-MAX7221.pdf) - [LED-MATRIX](https://www.amazon.de/dp/B07BRTCBLQ/ref=psdc_1626220031_t1_B06XJ9ZX17) - [7Segment](https://www.amazon.de/dp/B07D8ZC7Q3/ref=sspa_dk_detail_0?psc=1&pd_rd_i=B07D8ZC7Q3&pd_rd_w=3xZVd&pf_rd_p=493495a8-6974-49af-bd47-5bd55a278ea6&pd_rd_wg=mQ2AX&pf_rd_r=44JDFMB533WF6GQVD0NZ&pd_rd_r=3ba73304-9fde-11e9-ac76-613fa6a17ff6)

The MAX7219 library can be used for a 8x8 LED matrix module or 8x 7-segment module.
The library uses the orginal SPI library from the Arduino IDE.


# Connecting an MCU to a Modul
These instructions are for all MCU's.

|  MCU	|MAX7219-7Segment Modul|
|-------|-------------|
|  VCC  |    VCC	  | 
|  GND	|    GND      |
|  SCK	|	 CLK      |
| MOSI	|    DIN      |
|  SS	|	 CS		  |


# Installing the Library

To install the library into your IDE:
* click on the Clone or Download button on this Github page and select Download ZIP.
* Start the Arduino IDE and from the Sketch menu do Sketch->Include Library->Add ZIP Library and select the ZIP you just downloaded.


# API Reference
This is a very easy library to use. You may just wish to try out the examples, that send a bitmessage from the MCU to the MAX7219 using the SPI. But for completeness, here it is:

## Matrix-8x8-Modul

You can use a maximum 8 8x8Matrix fields.

### Include File
Include the the library.

```c
#include <MAX7219.h>
```


### Initialisation


Initialize the library with an object from Matrix8x8 from the Namespace MAX7219.

```c
MAX7219::Segment myMatrix
```

### setIntensity

Set the brightness of the module.

```c
myMatrix.setIntensity(uint8_t _intensity=1);
```
`_intensity`  brightness of segments / from 1 to 15

### writeByte

Writes a byte in the layout

```c
myMatrix.writeByte(uint64_t _byte, int8_t _row=0, int8_t _shift=0, int8_t _invert=0);
```
`_byte`  set the value of one byte

`_row`  set the row from the byte / from 0 to 7

`_shift` shift the byte by \_shift columns

`_invert` inverse the byte  /  0=not inverse or 1=inverse

### writeArray

Writes a array in the layout

```c
myMatrix.writeArray(char * _array, int8_t _shift=0, char _inversetion='n', int8_t _invert=0, uint8_t _offset=0);
```
`_array`  array[8][8]


`_shift` shift the array by \_shift columns

`_inversetion`  Turn the array in the \_inversetion direction / n=normal, r=right,l=left,h=headsup

`_invert` inverse the array  /  0=not inverse or 1=inverse

`_offset` change direction / runns 1=right to left or 0=left to right

### writeChar

Write an ASCII-sign in the layout

```c
myMatrix.writeChar(char _char, int8_t _shift=0, char _inversetion='n', int8_t _invert=0, uint8_t _offset=0);
```
`_array`  char string

`_shift` shift the char by \_shift columns

`_inversetion` Turn the char in the \_inversetion direction / n=normal,       	r=right,l=left,h=headsup

`_invert` inverse the char  /  0=not inverse or 1=inverse

`_offset` move up by \_offset raws


### printScrollText

Write a string which runs over the display

```c
myMatrix.printScrollText(char * _text, uint8_t _speed=80, int8_t _invert=0);
```
`_text`  char string

`_speed`  speed auf the running text

`_invert` change direction / runs 1=right to left or 0=left to right


### blankDisplay

Set all 8x8 fields blank.

```c
myMatrix.blankDisplay();
```


### printDisplay

Print/Show the inserted arrays of characters and bytes.

```c
myMatrix.printDisplay();
````
## 7-Segment Modul x8

You can use a maximum of 8 digits (including comma).

### Include File
Include the the library.

```c
#include <MAX7219.h>
```


### Initialisation


Initialize the library with an object from Segment from the Namespace MAX7219.

```c
MAX7219::Segment mySegment 
```


### setIntensity

Set the brightness of the module.

```c
mySegment.setIntensity(uint8_t _intensity=1);
```
`_intensity`  brightness of segments / from 1 to 15

### printNumber

Print/Show the number with definded decimals on the segments.

```c
mySegment.printNumber(double _number, uint8_t _decimals=0);
```
`_number`  number to show on the segments

`_decimals` number of decimal places displayed on the segments

### blankDisplay

Set all digits blank.

```c
mySegment.blankDisplay();
```

