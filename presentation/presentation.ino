
#define SKETCHPIN 8

int sketchStatus = LOW;
int firstSketch = LOW;
int secondSketch = HIGH;
int currentSketch = LOW;
bool startTalking;


void setup() {
  Serial.begin(9600);
  
  sonarSetup();
  speakerSetup();
  temperatureSetup();
  ledSetup();
}

void loop() {
  rainbowFace();
    //Detection of a person close to the robot with sonar
  startTalking = false;
  startTalking = sonarCanStartSpeech();
  while(startTalking == false){
    startTalking = sonarCanStartSpeech();
  }

  if(startTalking){
      Serial.println("FIRST SKETCH");
      talkingFace1();
      Serial.println("FIRST PRESENTATION");
      presentationSpeech1();
      happyLedFace1();
      qrSpeech1();
      makeBaseRotate();
      delay(1000);
      greetingsSpeech1();

   }
  startTalking = false;


  delay(6000);

  rainbowFace();
  startTalking = sonarCanStartSpeech();
  while(startTalking == false){
    startTalking = sonarCanStartSpeech();
  }

    if(startTalking){
      Serial.println("SECOND SKETCH");
      welcomeLedFace2();
      Serial.println("SECOND SPEECH");  
      delay(2000);
      //Welcome audio
      presentationSpeech();
      //Measure the temperature body
      Serial.println("temperature");
      measureTemperature();

   }

  
  
  
}
