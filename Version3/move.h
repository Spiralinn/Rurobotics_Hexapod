
#ifndef move_H 
#define move_H

//communications with the servo controller board (UART)

void move(int servo, int position, int time) {
  Serial.print("#");
  Serial.print(servo);
  Serial.print("P");
  Serial.print(position);
  Serial.print("T");
  Serial.println(time);
  //Serial.print(0x0d); Serial.print(0x0a);
}


#endif
