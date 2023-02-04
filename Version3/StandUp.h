#include "Variables.h"
#ifndef StandUp_H 
#define StandUp_H

// standa upp úr beygju/upphafi


void StandUp(){
  move(2, Standing, StandingUpSpeed);  //NO servo attach but is required...
  move(4, Standing, StandingUpSpeed); //1500 mid
  move(6, Standing, StandingUpSpeed); //1500 mid
  move(8, Standing, StandingUpSpeed); //1500 mi
  move(10, Standing, StandingUpSpeed); //1500 mid 
  move(12, Standing, StandingUpSpeed); //1500 mid
  move(14, Standing, StandingUpSpeed); //1500 mid

  delay(LongDelay);

  move(15, MiddlePos, ForwardSpeed); //1500 mid BOTTOM
  delay(ForwardDelay);

  
}

#endif
