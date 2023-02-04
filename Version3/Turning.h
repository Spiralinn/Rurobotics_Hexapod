#include "Variables.h"
#ifndef Turning_H 
#define Turning_H

//PASSA AÐ HANN SE I NEUTRAL POSITION


void Turning(int position){
  move(1, position, TurningSpeed); //NO servo attached but is required...
  move(2, position, TurningSpeed); //NO servo attached but is required...

  move(4, SitDown, SitDownSpeed); //1500 mid
  move(6, SitDown, SitDownSpeed); //1500 mid
  move(8, SitDown, SitDownSpeed); //1500 mid
  move(10, SitDown, SitDownSpeed); //1500 mid
  move(12, SitDown, SitDownSpeed); //1500 mid
  move(14, SitDown, SitDownSpeed); //1500 mid

  delay(LongDelay);

  move(15, position, TurningSpeed); 

  delay(LongDelay);

}

#endif
