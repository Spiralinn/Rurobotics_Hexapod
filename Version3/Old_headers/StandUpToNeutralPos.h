#include "Variables.h"
#ifndef StandUpToNeutralPos_H 
#define StandUpToNeutralPos_H

void StandUpToNeutralPos(){

  move(2, MiddlePos, StandingUpSpeed);  //NO servo attach but is required...
  move(4, MiddlePos, StandingUpSpeed); //1500 mid
  move(6, MiddlePos, StandingUpSpeed); //1500 mid
  move(8, MiddlePos, StandingUpSpeed); //1500 mi
  move(10, MiddlePos, StandingUpSpeed); //1500 mid
  move(12, MiddlePos, StandingUpSpeed); //1500 mid
  move(14, MiddlePos, StandingUpSpeed); //1500 mid

  delay(LongDelay);
  
}

#endif
