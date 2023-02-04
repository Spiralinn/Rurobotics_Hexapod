//Tveir servos
#ifndef TwoAtOnce_H 
#define TwoAtOnce_H

#include "Variables.h"

void TwoAtOnce(int servo1, int position, int servo2, int position2, int time){
  move(1, position, time); //NO servo attached but is required...
  move(2, position, time); //NO servo attached but is required...

  move(servo1, position, time); 
  move(servo2, position2, time); 
  delay(DELAY);
}

#endif
