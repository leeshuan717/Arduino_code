/*!
 * @file testRGBMatrix.ino
 * @brief Run the routine to test the RGB LED Matrix Panel
 * @copyright   Copyright (c) 2010 DFRobot Co.Ltd (http://www.dfrobot.com)
 * @license     The MIT License (MIT)
 * @author [TangJie]](jie.tang@dfrobot.com)
 * @version  V1.0.1
 * @date  2022-03-23
 * @url https://github.com/DFRobot/DFRobot_RGBMatrix
 */
 
#include <DFRobot_RGBMatrix.h> // Hardware-specific library

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

  matrix.setTextColor(matrix.Color333(7,0,0));
  matrix.println();
  matrix.setTextSize(2);
  matrix.setCursor(2, 7);
  matrix.println("12:00");
  matrix.setCursor(0, 16);
  matrix.drawLine(0, 22, 63, 22, matrix.Color333(0, 7, 0));
  matrix.setCursor(3, 25);
  matrix.println("Phone");
  matrix.drawLine(0, 40, 63, 40, matrix.Color333(0, 7, 0));
  
  matrix.setCursor(1, 44);
  matrix.setTextSize(1);
  matrix.println("37 C");
    
  matrix.setCursor(1, 53);
  matrix.setTextSize(1);
  matrix.println("35 %");

  matrix.drawLine(24, 40, 24, 63, matrix.Color333(0, 7, 0));

}

void loop() {
  // do nothing
}
