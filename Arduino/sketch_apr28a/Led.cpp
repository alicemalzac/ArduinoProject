#include "Led.h"

  Led::Led(){  }
  Led::Led(int i){
    pino = i;
  }
  
  void Led::iniciar(){
    pinMode (pino, INPUT);
  }
  void Led::acenderLed(){
    digitalWrite (12,HIGH);
  }
  void Led::apagarLed(){
    digitalWrite (12, LOW);
  }




