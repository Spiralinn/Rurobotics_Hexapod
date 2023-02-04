#ifndef Stepper_H 
#define Stepper_H
#include "Variables.h"
#include "ResetEDpins.h"

void Stepper(int Bias){

  digitalWrite(EN, LOW); //Pull enable pin low to allow motor control

  if(Bias == 1){ //StepForward     
    digitalWrite(dir, LOW); //Pull direction pin low to move "forward"
    
    for(x= 0; x<250; x++)  //Loop the forward stepping enough times for motion to be visible
    {
      digitalWrite(stp,HIGH); //Trigger one step forward
      delayMicroseconds(2500);
      digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
      delayMicroseconds(2500);
    }
      delay(10);
    
  }
  else if(Bias == 2){ //And go back 
      digitalWrite(dir, HIGH); //Pull direction pin high to move in "reverse"
      for(x= 0; x<250; x++)  //Loop the stepping enough times for motion to be visible
      {
        digitalWrite(stp,HIGH); //Trigger one step
        delayMicroseconds(2500);
        digitalWrite(stp,LOW); //Pull step pin low so it can be triggered again
        delayMicroseconds(2500);
      }
  }

  resetEDPins(); //Set step, direction, microstep and enable pins to default states
  delay(1000);


  
}
#endif 
