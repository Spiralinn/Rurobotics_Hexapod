#include "Variables.h"
#include "TwoAtOnce.h"
#include "StandUp.h"
#include "move.h"
#include "StandLow.h"

#ifndef UpTheHill_H 
#define UpTheHill_H


void UpTheHill(){
  move(1, SitDown, TurningSpeed); //NO servo attached but is required...
  move(2, SitDown, TurningSpeed); //NO servo attached but is require

  move(3, Forward_left, ForwardSpeed); 
  delay(ForwardDelay);
  move(4, Climbing, ClimbingSpeed);
  delay(ForwardDelay);

  move(5, Forward_left, ForwardSpeed); 
  delay(ForwardDelay);
  move(6, Climbing, ClimbingSpeed);
  delay(ForwardDelay);

  move(7, Forward_left, ForwardSpeed); 
  delay(ForwardDelay);
  move(8, Climbing, ClimbingSpeed);
  delay(ForwardDelay);

  move(9, Forward_right, ForwardSpeed); 
  delay(ForwardDelay);
  move(10, Climbing, ClimbingSpeed);
  delay(ForwardDelay);

  move(11, Forward_right, ForwardSpeed); 
  delay(ForwardDelay);
  move(12, Climbing, ClimbingSpeed);
  delay(ForwardDelay);

  move(13, Forward_right, ForwardSpeed); 
  delay(ForwardDelay);
  move(14, Climbing, ClimbingSpeed);
  delay(ForwardDelay);
  

  StandUp(); // puts the leg into the right hight for walking     

  delay(DELAY);
  move(1, Backwards_left, ForwardSpeed); //NO servo attached but is required...
  move(2, Backwards_left, ForwardSpeed); //NO servo attached but is required...
  
  move(3, Backwards_left, ForwardSpeed);
  move(5, Backwards_left_middle, ForwardSpeed);
  move(7, Backwards_left, ForwardSpeed);
  move(9, Backwards_right, ForwardSpeed);
  move(11, Backwards_right_middle, ForwardSpeed);
  move(13, Backwards_right, ForwardSpeed);

  delay(ForwardDelay);

  StandLow(); // puts the leg into the right hight for walking 

  delay(DELAY);

}

#endif
