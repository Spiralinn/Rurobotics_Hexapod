#include "Variables.h"
#include "LeftGroup.h"
#include "RightGroup.h"

#ifndef NeutralPos_H 
#define NeutralPos_H

//Allir fætur í núll stöðu

void NeutralPos(){
  //Move left group up
  LeftGroup(4, 8, NeutralUp, 12, NeutralUp, ForwardSpeed);
  delay(ForwardDelay);
  
  //Move left group to middle Pos
  LeftGroup(3, 7, MiddlePos, 11, MiddlePos, ForwardSpeed);
  delay(ForwardDelay);

  //Move left group down
  LeftGroup(4, 8, MiddlePos, 12, MiddlePos, ForwardSpeed);
  delay(ForwardDelay);

  //move right group up
  RightGroup(6, NeutralUp, 10, 14, NeutralUp, ForwardSpeed);
  delay(ForwardDelay);
  
  //Move right group forward
  RightGroup(5, MiddlePos, 9, 13, MiddlePos, ForwardSpeed);
  delay(ForwardDelay);
  
  //Move right group down
  RightGroup(6, MiddlePos, 10, 14, MiddlePos, ForwardSpeed);
  delay(ForwardDelay);

  move(15, MiddlePos, ForwardSpeed); //1500 mid BOTTOM
  delay(ForwardDelay);
  

}

#endif
