#include <Wire.h>
#include <Adafruit_MLX90614.h>

int distance;
int numMeasurements;

Adafruit_MLX90614 mlx = Adafruit_MLX90614();
int temp = 36.0;

void temperatureSetup(){
  mlx.begin(); 
}

void measureTemperature(){
  distance = 0;
  numMeasurements = 0;
  //THE PERSON MUST BE NEAR THE SENSOR AT LEAST FOR 2 MEASUREMENTS
  while(numMeasurements < 2){
    distance = sonarDetectTemperatureDistance(); 
    if ((distance<10)&&(distance>0)) numMeasurements++;
  }
  Serial.println("Let's measure your're temperature:"); 
  temp = mlx.readObjectTempC()+7.3;
  Serial.println("You're temperature is"); Serial.println(temp); Serial.println("°C");
  if(temp>37.5){
    //SAD FACE
    feverFace2();
    feverSpeech();
    makeBaseRotate();
    Serial.println("You got fever");
  }else{
    //HAPPY FACE
    temperatureOkFace2();
    temperatureOkSpeech();
    delay(500);
    makeRobotBow();
    delay(5000);
    Serial.println("You're temperature is fine");
  }
}
