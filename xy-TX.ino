/*
This is the transmitter file, with x/y proportional control, x indicator lights
and x function buttons.
Written 2016-09-20

*/
/* ==== Includes ==== */
#include <Wire.h>             // Needed for legacy versions of Arduino.
/* ====  END Includes ==== */

/* ==== Defines ==== */
#define SERIAL_BAUD 115200
/* ==== END Defines ==== */

/* ==== Global Variables ==== */
struct {
  int xPos;
  int yPos;
  bool aFun;
  bool bFun;
  bool cFun;
}tx;


/* ==== END Global Variables ==== */


/* ==== Setup ==== */
void setup() {
  Serial.begin(SERIAL_BAUD);
  while(!Serial) {} // Wait
  while(!bme.begin()){
    Serial.println("Could not find BME280 sensor!");
    delay(1000);
  }
}


/* ==== End setup ==== */


/* ==== Loop ==== */
void loop() {
   //write joystick x value to struct member
   //write joystick y value to struct member
   //write function a value to struct member
   //write function b value to struct member
   //write function c value to struct member
}
/* ==== End loop ==== */


/* ==== Functions ==== */

/* ==== End functions ==== */

/* ==== End file ==== */
