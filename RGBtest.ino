#include <DFRobot_RGBMatrix.h>

#define OE   	9
#define LAT 	10
#define CLK 	11
#define A   	A0
#define B   	A1
#define C   	A2
#define D   	A3
#define E   	A4
#define WIDTH 64
#define _HIGH	64 

DFRobot_RGBMatrix matrix(A, B, C, D, E, CLK, LAT, OE, false, WIDTH, _HIGH);

void setup() {
  matrix.begin();
  matrix.fillScreen(matrix.Color333(7, 7, 7));//red , green , blue
}


void loop() {
}
