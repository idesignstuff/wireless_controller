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
  
    delay(500);
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
   
   
   //Send struct to unit
   
   //Receive response from unit
   //write response to struct
   /*light logic
      unit battery low?
      safety interlock tripped?
      function a on?
      function b on?
      function c on?
      */
      
  
}
/* ==== End loop ==== */


/* ==== Functions ==== */
// maybe joystick polling goes here
//maybe light logic goes here

/* ==== End functions ==== */

/* ==== End file ==== */
