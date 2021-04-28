
/*
 * SD CARD PINS
CS = pin 4
SCK = pin 13
MOSI = pin 11
MISO = pin 12
VCC = 5V
GND = GND

SPEAKER PINS:
GND (external part) = GND arduino
DATA (internal part ) = pin 9 arduino

*/

#include <SD.h>                           //include SD module library
#include <TMRpcm.h>  
#define SD_ChipSelectPin 4  

TMRpcm tmrpcm;    

char *welcome = (char*) "welcome.wav";
char *greet = (char*) "greet.wav";
char *qr = (char*) "qr.wav";


char *title = (char*) "sound.wav";
char *fever = (char*) "fever.wav";
char *temperatureOk = (char*) "ok.wav";
char *background = (char*) "background.wav";


void speakerSetup(){
  tmrpcm.speakerPin = 9;
  if (!SD.begin(SD_ChipSelectPin)) {      //see if the card is present and can be initialized 
    return;                               //don't do anything more if not
  }
  tmrpcm.setVolume(5); 
}



//PHASE1
void greetingsSpeech1(){
  tmrpcm.play(greet);
  delay(3000); 
}
void presentationSpeech1(){
  Serial.println("PRESENTATION");
  tmrpcm.play(welcome);   
  delay(20000); 
}
void qrSpeech1(){
  Serial.println("PRESENTATION");
  tmrpcm.play(qr);   
  delay(5000); 
}



//PHASE2

void presentationSpeech(){
  Serial.println("PRESENTATION");
  tmrpcm.play(title);   
  delay(15000);
}

void feverSpeech(){
  Serial.println("FEVER");
  tmrpcm.play(fever);   
  delay(9000);
}

void temperatureOkSpeech(){
  Serial.println("TEMPERATURE OK");
  tmrpcm.play(temperatureOk);   
  delay(7000);
}
