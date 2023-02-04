#include "Variables.h"
#ifndef StandLow_H 
#define StandLow_H

// standa upp úr beygju/upphafi


void StandLow(){
  move(1, SitDown, TurningSpeed); //NO servo attached but is required...
  move(2, SitDown, TurningSpeed); //NO servo attached but is required...

  move(4, SitDown, SitDownSpeed); //1500 mid
  move(6, SitDown, SitDownSpeed); //1500 mid
  move(8, SitDown, SitDownSpeed); //1500 mid
  move(10, SitDown, SitDownSpeed); //1500 mid
  move(12, SitDown, SitDownSpeed); //1500 mid
  move(14, SitDown, SitDownSpeed); //1500 mid

  delay(LongDelay);
  
}

#endif
