#include "PlanetXLed.h"

PlanetXLed::PlanetXLed(RJPin pin)
{
  _pin = pins[pin][0];
  pinMode(_pin, OUTPUT);
}

void PlanetXLed::on()
{
  digitalWrite(_pin, HIGH);
}

void PlanetXLed::off()
{
  digitalWrite(_pin, LOW);
}
