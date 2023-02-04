#include "move.h"
#include "LeftGroup.h"
#include "RightGroup.h"
#include "Turning.h"
#include "Forward.h"
#include "StandUp.h"
#include "Variables.h"
#include "UpTheHill.h"
#include "CenterLegs.h"
#include "Stepper.h"
#include "ResetEDpins.h"
#include "StandLow.h"

 //Declare pins for stepper
#define stp 3
#define dir 4
#define MS1 5
#define MS2 6
#define EN  7

const int buttonPin = 2;
int buttonState = 0;         // variable for reading the pushbutton status
int TestVar = 0;

//900 - 2100, 1500 to reset !!!!!!!!!!!!!!!!!!!!!!

void setup() {
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);

  pinMode(stp, OUTPUT);
  pinMode(dir, OUTPUT);
  pinMode(MS1, OUTPUT);
  pinMode(MS2, OUTPUT);
  pinMode(EN, OUTPUT);
  resetEDPins(); //Set step, direction, microstep and enable pins to default states

  StandUp(); // puts the leg into the right hight for walking
}

void loop() {
  buttonState = digitalRead(buttonPin);

   

   if (buttonState == HIGH) {
      //PHASE 1, turn and walk into the half circle!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!  
      for(int i = 0; i <= 1; i++){
        forward(); // walks straight forward
      }
      Turning(1970); // Sits down and turns
      StandUp(); // puts the leg into the right hight for walking          
      for(int i = 0; i <= 8; i++){
        forward(); // walks straight forward
      }

      //PHASE 2, turn, walk, turn and walk out of the half circle.!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
      Turning(1220); // Sits down and turns
      StandUp(); // puts the leg into the right hight for walking        
      for(int i = 0; i <= 2; i++){
        forward(); // walks straight forward
      }

      Turning(1200); // Sits down and turns
      StandUp(); // puts the leg into the right hight for walking        
      for(int i = 0; i <= 3; i++){
        forward(); // walks straight forward
      }
      
      Turning(1120); // Sits down and turns
      StandUp(); // puts the leg into the right hight for walking        
      for(int i = 0; i <= 2; i++){
        forward(); // walks straight forward
      }

      Turning(1200); // Sits down and turns
      StandUp(); // puts the leg into the right hight for walking        
      for(int i = 0; i <= 7; i++){
        forward(); // walks straight forward
      }



      //PHASE 3, turn and walk to the side of the first pillar!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
      Turning(1980); // Sits down and turns
      StandUp(); // puts the leg into the right hight for walking        
      for(int i = 0; i <= 2; i++){
        forward(); // walks straight forward
      }          

      //PHASE 4, Get the ring and move it to the next pillar.!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
      //CenterLegs(); // get balance in the legs.
      
      StandLow(); // Position the legs so that it can get the ring on the stand up
      Stepper(2); //1 means BCKWARDS     
      StandUp(); // puts the leg into the right hight for walking 
      Stepper(1); //2 means forward
        
      for(int i = 0; i <= 5; i++){
        forward(); // walks straight forward
      }
      
      //CenterLegs(); // get balance in the legs.
      StandUp(); // puts the leg into the right hight for walking 
      Stepper(2); //1 means forward     
      StandLow(); // puts the leg into the right hight for walking 
      Stepper(1); //2 means backwards

      //PHASE 5 move to the hill and cross it.!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
      //StandUp(); // puts the leg into the right hight for walking 
      for(int i = 0; i <= 12; i++){
        forward(); // walks straight forward
      }
      //CenterLegs(); // get balance in the legs.
      //StandLow(); // SitsDown
      //for(int i = 0; i <= 5; i++){ // TWO AT A TIME WALK
      //  UpTheHill(); // place CenterLegs in front of this
      //}

      //PHASE 6, Walk to the button and press it.!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
     // Turning(2000); // Sits down and turns
     // for(int i = 0; i <= 3; i++){
      //  forward(); // walks straight forward
      //}
      //CenterLegs(); // get balance in the legs.
     // StandUp(); // puts the leg into the right hight for walking 
      //CODE FOR MOVING STEPPER MOTOR!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
      //CODE TO SIT DOWN RIGHT!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
  
  }

}
