 
const int trigPin = 3;
const int echoPin = 2;

void sonarSetup(){
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

// DETECT THE DISTANCE OF A PERSON AND IF IT IS LESS THAN A TRESHOLD IT STARTS SPEAKING
long durationPresentationSonar;
int distancePresentationSonar;
bool sonarCanStartSpeech(){
  distancePresentationSonar= 0;
  durationPresentationSonar = 0;
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  durationPresentationSonar = pulseIn(echoPin, HIGH, 23529);
  distancePresentationSonar= durationPresentationSonar*0.034/2;

  if (distancePresentationSonar<2)return true;
  else return false;
  
}

//DETECT THE DISTANCE OF THE ARM OF THE PERSON IN ORDER TO MEASURE THE TEMPERATURE
long durationSonar;
int distanceSonar;


//ONLY FOR PHASE 2
int sonarDetectTemperatureDistance(){
  distanceSonar = 0;
  durationSonar = 0;
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  durationSonar = pulseIn(echoPin, HIGH, 23529);
  distanceSonar= durationSonar*0.034/2;
  return distanceSonar;

  
}
