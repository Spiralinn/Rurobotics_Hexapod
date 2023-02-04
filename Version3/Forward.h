#include "Variables.h"
#include "LeftGroup.h"
#include "RightGroup.h"

#ifndef forward_H 
#define forward_H

// Labba áfram
int Forward_left = 1750; //1800 -- 1750 -- 1700
int Forward_right = 1250; //1200 -- 1250 --1300
int Backwards_left = 1250; //1200 -- 1250 -- 1300
int Backwards_right = 1750; // 1800 -- 1750 -- 1700

void forward(){
  //Move left group up
  LeftGroup(4, 8, Feetup, 12, Feetup, ForwardSpeed);
  //delay(ForwardDelay);
  
  //Move left group forward
  LeftGroup(3, 7, Forward_left, 11, Forward_right_middle, ForwardSpeed);
  //delay(ForwardDelay);

  //Move right group backwards
  RightGroup(5, Backwards_left_middle, 9, 13, Backwards_right, ForwardSpeed);
  delay(ForwardDelay);

  //Move left group down
  LeftGroup(4, 8, Standing, 12, Standing, ForwardSpeed);
  delay(ForwardDelay);

  //move right group up
  RightGroup(6, Feetup, 10, 14, Feetup, ForwardSpeed);
  //delay(ForwardDelay);
  
  //Move right group forward
  RightGroup(5, Forward_left_middle, 9, 13, Forward_right, ForwardSpeed);
  //delay(ForwardDelay);

  //Move left group backwards
  LeftGroup(3, 7, Backwards_left, 11, Backwards_right_middle, ForwardSpeed);
  delay(ForwardDelay);
  
  //Move right group down
  RightGroup(6, Standing, 10, 14, Standing, ForwardSpeed);
  delay(ForwardDelay);

}

#endif
