/*
   Matt Calder
   Stepper Music Box 01
*/

#include "stepPitches.h"
#include <Stepper.h>
#include "SMB.h"

void setup()
{
  SMB_Setup();
}

void loop()
{
  if (Serial.available()) a = Serial.read();

  switch (a)
  {
    case '1':
      {
        SW();
        break;
      }
    case '2':
      {
        FE();
        break;
      }
    case '3':
      {
        STH();
        break;
      }
  }


}
