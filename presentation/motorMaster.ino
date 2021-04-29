

int commandServo1 = 1; //bow pin 9
int commandServo2 = 2; //rotation base pin 8

void makeRobotBow(){
  Serial.write(1);
  delay(6000);
}
void makeBaseRotate(){
  Serial.write(2);
  delay(6000);
  
}
