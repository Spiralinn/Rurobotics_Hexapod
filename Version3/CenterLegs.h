#include "Variables.h"
#include "LeftGroup.h"
#include "RightGroup.h"

#ifndef CenterLegs_H 
#define CenterLegs_H


void CenterLegs(){
  //Move both groups down at once
  LeftGroup(4, 8, MiddlePos, 12, MiddlePos, ForwardSpeed);
  RightGroup(6, MiddlePos, 10, 14, MiddlePos, ForwardSpeed);
  delay(ForwardDelay);
  
  //Move left group updelay(ForwardDelay);
  LeftGroup(4, 8, FeetupCenter, 12, FeetupCenter, ForwardSpeed);
  delay(ForwardDelay);
  
  //Move left group into middle pos
  LeftGroup(3, 7, MiddlePos, 11, MiddlePos, ForwardSpeed);
  delay(ForwardDelay);

  //Move left group down
  LeftGroup(4, 8, MiddlePos, 12, MiddlePos, ForwardSpeed);
  delay(ForwardDelay);

  //move right group up
  RightGroup(6, FeetupCenter, 10, 14, FeetupCenter, ForwardSpeed);
  delay(ForwardDelay);
  
  //Move right group into middle pos
  RightGroup(5, MiddlePos, 9, 13, MiddlePos, ForwardSpeed);
  delay(ForwardDelay);

  //Move right group down
  RightGroup(6, MiddlePos, 10, 14, MiddlePos, ForwardSpeed);
  delay(ForwardDelay);

}

#endif
