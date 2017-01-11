#include <Sprite.h>  // Sprite before Matrix
#include <Matrix.h>

//                  DIN, CLK, LOAD, #chips
Matrix myLeds = Matrix(4, 8, 9, 10);

Sprite letter_L = Sprite(5, 8,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11000,
  B11111,
  B11111
);
Sprite letter_E = Sprite(5, 8,
  B11111,
  B11111,
  B11000,
  B11110,
  B11110,
  B11000,
  B11111,
  B11111
);
Sprite letter_D = Sprite(6, 8,
  B111100,
  B111110,
  B110111,
  B110011,
  B110011,
  B110111,
  B111110,
  B111100
);
Sprite letter_S = Sprite(5, 8,
  B01110,
  B11111,
  B11000,
  B11110,
  B01111,
  B00011,
  B11111,
  B01110
);

void setup() {
  myLeds.clear();
  myLeds.setBrightness(4);
  myLeds.write(0, 0, letter_L);
  myLeds.write(6, 0, letter_E);
  myLeds.write(12, 0, letter_D);
  myLeds.write(19, 0, letter_S);
}

void loop() {
}
