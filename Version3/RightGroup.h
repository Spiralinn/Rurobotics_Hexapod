//Hægri hreyfi hópur
#ifndef RightGroup_H 
#define RightGroup_H

void RightGroup(int servo1, int position, int servo2, int servo3, int position2, int time){
  move(1, position, time); //NO servo attached but is required...
  move(2, position, time); //NO servo attached but is required...

  move(servo1, position, time); 
  move(servo2, position2, time); 
  move(servo3, position2, time);
}

#endif
