#ifndef _PlanetXLED_H_
#define _PlanetXLED_H_

#include "RJPins.h"

class PlanetXLed
{
public:
  PlanetXLed(RJPin pin);
  void on();
  void off();

private:
  uint8_t _pin;
};

#endif
