#include "Arduino.h"

class Led {
  private:
  int pino = 9;
  int brilho = 0;
  int fade = 5;
  
  public:
  Led();
  Led(int i);
  void iniciar();
  void acenderLed();
  void apagarLed();

};



