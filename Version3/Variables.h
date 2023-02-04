#ifndef Variables_H 
#define Variables_H

 //Declare pins for stepper
#define stp 3
#define dir 4
#define MS1 5
#define MS2 6
#define EN  7
int x;
int y;

//breyttur fyrir öll föll
int Standing = 1000;
int StandingLow = 1300;

int FeetupCenter = 1800;
int Feetup = 1600;

int Climbing = 1900;
int ClimbingSpeed = 400;

int NeutralUp = 1800;

int MiddlePos = 1500;

int ForwardSpeed = 200; //500 -- 600 -- 300 -- 400
int ForwardDelay = 600; //1000 -- 1400 -- 800 -- 1000

int Forward_left_middle = 1550;
int Forward_right_middle = 1450;
int Backwards_left_middle = 1450;
int Backwards_right_middle = 1550;

int DELAY = 1000;

int LongDelay = 2000;

int SitDown = 2100;
int SitDownSpeed = 800;

int StandingUpSpeed = 800;

int TurningSpeed = 1000;
int TurningDelay = 1200;

#endif
