


#include <Adafruit_NeoPixel.h>

// Which pin on the Arduino is connected to the NeoPixels?
#define LED_PIN 7

// How many NeoPixels are attached to the Arduino?
#define NUMPIXELS 42 // Popular NeoPixel ring size

// When setting up the NeoPixel library, we tell it how many pixels,
// and which pin to use to send signals. Note that for older NeoPixel
// pixelss you might need to change the third parameter -- see the
// strandtest example for more information on possible values.
Adafruit_NeoPixel pixels(NUMPIXELS, LED_PIN, NEO_RGB + NEO_KHZ800);

#define DELAYVAL 500 // Time (in milliseconds) to pause between pixels
uint32_t green = pixels.Color(255, 0, 0); // Red
uint32_t red  = pixels.Color(0, 255, 0); // Green
uint32_t blue = pixels.Color(0, 0, 255); // Blue
uint32_t lightBlue= pixels.Color(255, 0, 255);  // Light blue
uint32_t purple  = pixels.Color(0, 255, 255);// Purple
uint32_t yellow = pixels.Color(255, 255, 0); // Yellow
uint32_t white = pixels.Color(255, 255, 255); // White
uint32_t indigo = pixels.Color(0x4B, 0x0, 0x82); //Indigo
uint32_t violet = pixels.Color(0, 170, 255);
uint32_t orange = pixels.Color(70,255,0);


void ledSetup(){
// These lines are specifically to support the Adafruit Trinket 5V 16 MHz.
// Any other board, you can remove this part (but no harm leaving it):
#if defined(__AVR_ATtiny85__) && (F_CPU == 16000000)
  clock_prescale_set(clock_div_1);
#endif

pixels.begin(); // INITIALIZE NeoPixel pixels object (REQUIRED).show();
//pixels.show();

}

void rainbowFace(){

  int i = 0;
  for(i=0; i<=6 ; i++){
    pixels.setPixelColor(i, indigo);
  }

  for(i=7; i<=13 ; i++){
    pixels.setPixelColor(i, violet);
  }

  for(i=14 ; i<=20;i++){
    pixels.setPixelColor(i, purple);
  }

  for(i=21; i<=27;i++){
     pixels.setPixelColor(i, orange);
  }

  for(i=28; i<=34;i++){
    pixels.setPixelColor(i, yellow);
  }
   for(i=35; i<=41;i++){
    pixels.setPixelColor(i, green);
  }

  pixels.show();
  delay(5000);
  pixels.clear();
  pixels.show();
  delay(100);
}


//PHASE 1
void happyLedFace1(){

   pixels.setPixelColor(16,0);
   pixels.setPixelColor(18,0);
   pixels.setPixelColor(1, indigo);
   pixels.setPixelColor(2, indigo);
   pixels.setPixelColor(4, indigo);
   pixels.setPixelColor(5, indigo);
   pixels.setPixelColor(7, indigo);
   pixels.setPixelColor(9, indigo);
   pixels.setPixelColor(11, indigo);
   pixels.setPixelColor(13,indigo);

   //mouth
   pixels.setPixelColor(29, indigo);
   pixels.setPixelColor(33, indigo);
   pixels.setPixelColor(37, indigo);
   pixels.setPixelColor(38, indigo);
   pixels.setPixelColor(39, indigo);
   pixels.setPixelColor(21, indigo);
   pixels.setPixelColor(22, indigo);
   pixels.setPixelColor(26, indigo);
   pixels.setPixelColor(27, indigo);
   pixels.show();
   //eyes
      // Send the updated pixel colors to the hardware.
   //delay(2000);

}

void welcomeLedFace1(){
   pixels.clear();
   pixels.show();
   delay(100);
   pixels.setPixelColor(2, indigo);
   pixels.setPixelColor(4, indigo);
   pixels.setPixelColor(9, indigo);
   pixels.setPixelColor(11, indigo);
   pixels.setPixelColor(16, indigo);
   pixels.setPixelColor(18, indigo);
   pixels.setPixelColor(21, indigo);


   pixels.setPixelColor(33, indigo);
   pixels.setPixelColor(37, indigo);
   pixels.setPixelColor(38, indigo);
   pixels.setPixelColor(39, indigo);
   pixels.setPixelColor(27, indigo);
   pixels.setPixelColor(29, indigo);
   pixels.show();   // Send the updated pixel colors to the hardware.
   delay(19000); // Pause before next pass through loop

}


void talkingFace1(){
  for(int i=0; i<50;i++){
  
   //pixels.clear();
   //pixels.show();
   //delay(100);
   pixels.setPixelColor(23,0);
   pixels.setPixelColor(24,0);
   pixels.setPixelColor(25,0);
   pixels.setPixelColor(2, indigo);
   pixels.setPixelColor(4, indigo);
   pixels.setPixelColor(9, indigo);
   pixels.setPixelColor(11, indigo);
   pixels.setPixelColor(16, indigo);
   pixels.setPixelColor(18, indigo);
   pixels.setPixelColor(21, indigo);
   pixels.setPixelColor(27, indigo);
   pixels.setPixelColor(29, indigo);
   pixels.setPixelColor(30, indigo);
   pixels.setPixelColor(31, indigo);
   pixels.setPixelColor(32, indigo);
   pixels.setPixelColor(33, indigo);
   pixels.setPixelColor(37, indigo);
   pixels.setPixelColor(38, indigo);
   pixels.setPixelColor(39, indigo);
   pixels.show();
  }  
  

}

//PHASE 2
void welcomeLedFace2(){
 
  pixels.setPixelColor(16, 0);
  pixels.setPixelColor(18, 0);
  pixels.setPixelColor(1, indigo);
  pixels.setPixelColor(2, indigo);
  pixels.setPixelColor(4, indigo);
  pixels.setPixelColor(5, indigo);
  pixels.setPixelColor(7, indigo);
  pixels.setPixelColor(9, indigo);
  pixels.setPixelColor(11, indigo);
  pixels.setPixelColor(13,indigo);

  //mouth
  pixels.setPixelColor(29, indigo);
  pixels.setPixelColor(33, indigo);
  pixels.setPixelColor(37, indigo);
  pixels.setPixelColor(38, indigo);
  pixels.setPixelColor(39, indigo);
  pixels.setPixelColor(21, indigo);
  pixels.setPixelColor(22, indigo);
  pixels.setPixelColor(26, indigo);
  pixels.setPixelColor(27, indigo);
  pixels.show();
  delay(3000);
 
}

void temperatureOkFace2(){

   //clear pixels from the welcome face
   pixels.setPixelColor(1, 0);
   pixels.setPixelColor(5, 0);
   pixels.setPixelColor(13, 0);
   pixels.setPixelColor(7, 0);
   pixels.setPixelColor(18, 0);

   //eyes
   pixels.setPixelColor(2, green);
   pixels.setPixelColor(4, green);
   pixels.setPixelColor(9, green);
   pixels.setPixelColor(11, green);
   pixels.setPixelColor(16, green);
   pixels.setPixelColor(18, green);

   //mouth
   pixels.setPixelColor(29, green);
   pixels.setPixelColor(33, green);
   pixels.setPixelColor(37, green);
   pixels.setPixelColor(38, green);
   pixels.setPixelColor(39, green);
   pixels.setPixelColor(21, green);
   pixels.setPixelColor(22, green);
   pixels.setPixelColor(26, green);
   pixels.setPixelColor(27, green);
   pixels.show();
   //eyes
      // Send the updated pixel colors to the hardware.
   delay(2000);

}

void feverFace2(){
   pixels.clear();
   //EYES
   pixels.setPixelColor(0, red);
   pixels.setPixelColor(1, red);
   pixels.setPixelColor(2, red);
   pixels.setPixelColor(4, red);
   pixels.setPixelColor(5, red);
   pixels.setPixelColor(6, red); 
   pixels.setPixelColor(7, red);
   pixels.setPixelColor(9, red);
   pixels.setPixelColor(11, red);
   pixels.setPixelColor(13, red);
   pixels.setPixelColor(14, red);
   pixels.setPixelColor(16, red);
   pixels.setPixelColor(18, red);
   pixels.setPixelColor(20, red);
   //MOUTH
   pixels.setPixelColor(30, red);
   pixels.setPixelColor(31, red);
   pixels.setPixelColor(32, red);
   pixels.setPixelColor(35, red);
   pixels.setPixelColor(36,red);
   pixels.setPixelColor(40, red);
   pixels.setPixelColor(41, red);
   pixels.show();

   //eyes
      // Send the updated pixel colors to the hardware.
  // Pause before next pass through loop
}

void happyLedFace2(){
   pixels.clear();
   pixels.setPixelColor(2, pixels.Color(0, 150,0));
   pixels.setPixelColor(4, pixels.Color(0, 150,0));
   pixels.setPixelColor(9, pixels.Color(0, 150,0));
   pixels.setPixelColor(11, pixels.Color(0, 150,0));
   pixels.setPixelColor(16, pixels.Color(0, 150,0));
   pixels.setPixelColor(18, pixels.Color(0, 150,0));
   pixels.setPixelColor(21, pixels.Color(0, 150,0));
   pixels.setPixelColor(22, pixels.Color(0, 150,0));
   pixels.setPixelColor(23, red);
   pixels.setPixelColor(24, red);
   pixels.setPixelColor(25, red);
   pixels.setPixelColor(26, red);
   pixels.setPixelColor(33, pixels.Color(0, 150,0));
   pixels.setPixelColor(37, pixels.Color(0, 150,0));
   pixels.setPixelColor(38, pixels.Color(0, 150,0));
   pixels.setPixelColor(39, pixels.Color(0, 150,0));
   pixels.setPixelColor(27, pixels.Color(0, 150,0));
   pixels.setPixelColor(29, pixels.Color(0, 150,0));
   pixels.show();   // Send the updated pixel colors to the hardware.
   delay(DELAYVAL); // Pause before next pass through loop
      pixels.clear();
   pixels.show();
   delay(100);
}
