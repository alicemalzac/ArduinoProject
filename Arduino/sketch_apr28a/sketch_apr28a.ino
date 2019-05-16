#include "Led.h"

Led led(12);

void setup()
{
  led.iniciar();
}

void loop()
{
  led.acenderLed();
}

