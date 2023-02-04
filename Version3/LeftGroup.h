//vinstri hreyfi hópur
#ifndef LeftGroup_H 
#define LeftGroup_H

void LeftGroup(int servo1, int servo2, int position, int servo3, int position2, int time){
  move(1, position, time); //NO servo attached but is required...
  move(2, position, time); //NO servo attached but is required...

  move(servo1, position, time); 
  move(servo2, position, time); 
  move(servo3, position2, time);
}

#endif
