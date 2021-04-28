#include <Servo.h>
#define PINSERVO1 8
#define PINSERVO2 9

Servo myServo1;
Servo myServo2;

int posServo1 = 0;
int posServo2 = 0;
int servoCommand;




void setup() {
  Serial.begin(9600);
  myServo1.write(0);
  myServo2.write(0);
  myServo1.attach(PINSERVO1);
  myServo2.attach(PINSERVO2);

}

void loop() {
  
  servoCommand = Serial.read();


  //MAKES THE ROBOT BOW
  if(servoCommand == 1){
    for(posServo1 = 35; posServo1 >= 0; posServo1-=1){
      myServo1.write(posServo1);
      delay(15);
    }
    
    delay(6000);
    
     for(posServo1 = 0; posServo1 <=35 ; posServo1 += 1){
      myServo1.write(posServo1);
      delay(15);
    }
    delay(6000);
  }
  //MAKES THE BASE ROTATE
  else if(servoCommand == 2) {
    for(posServo2 = 0; posServo2 < 180; posServo2 +=1 ){
      myServo2.write(posServo2);
      delay(15);
    }
    
    delay(6000);
    
     for(posServo2 = 180; posServo2 >=1 ; posServo2-=1){
      myServo2.write(posServo2);
      delay(15);
    }
    delay(6000);
  }
  //servoCommand = 0;
}
