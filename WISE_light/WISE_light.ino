#include <Adafruit_NeoPixel.h>
//gets ready to control the strip, 
//1st number is the number of leds
//2nd number is the pin on the board that it is attatched to
Adafruit_NeoPixel strip = Adafruit_NeoPixel(8, 1, NEO_GRB + NEO_KHZ800);
int pause=2;

void setup() {
  //starts the code that controls the strip 
  strip.begin();
  //use this line each time you want to display the changes
  strip.show(); 
}

void loop() {
  //set rgb values for first column
  strip.setPixelColor(7, 0, 0, 0);
  strip.setPixelColor(6, 0, 0, 0);
  strip.setPixelColor(5, 127, 0, 0);
  strip.setPixelColor(4, 127, 0, 0);
  strip.setPixelColor(3, 127, 0, 0);
  strip.setPixelColor(2, 127, 0, 0);
  strip.setPixelColor(1, 0, 0, 0);
  strip.setPixelColor(0, 0, 0, 0);
  strip.show(); 
  //wait for pause milliseconds
  delay(pause);
  
  
  
  //set rgb values for second column
  strip.setPixelColor(7, 0, 0, 0);
  strip.setPixelColor(6, 127, 0, 0);
  strip.setPixelColor(5, 0, 0, 0);
  strip.setPixelColor(4, 0, 0, 0);
  strip.setPixelColor(3, 127, 0, 0);
  strip.setPixelColor(2, 0, 0, 0);
  strip.setPixelColor(1, 127, 0, 0);
  strip.setPixelColor(0, 0, 0, 0);
  strip.show();
  delay(pause);
  
  //set rgb values for third column
  strip.setPixelColor(7, 127, 0, 0);
  strip.setPixelColor(6, 0, 0, 0);
  strip.setPixelColor(5, 0, 0, 0);
  strip.setPixelColor(4, 0, 0, 0);
  strip.setPixelColor(3, 0, 0, 0);
  strip.setPixelColor(2, 0, 0, 127);
  strip.setPixelColor(1, 0, 0, 0);
  strip.setPixelColor(0, 127, 0, 0);
  strip.show();
  delay(pause);
  
  //set rgb values for fourth column
  strip.setPixelColor(7, 127, 0, 0);
  strip.setPixelColor(6, 0, 0, 0);
  strip.setPixelColor(5, 127, 0, 0);
  strip.setPixelColor(4, 0, 0, 0);
  strip.setPixelColor(3, 0, 0, 0);
  strip.setPixelColor(2, 0, 0, 127);
  strip.setPixelColor(1, 0, 0, 0);
  strip.setPixelColor(0, 127, 0, 0);
  strip.show();
  delay(pause);
  
  //set rgb values for fifth column
  strip.setPixelColor(7, 127, 0, 0);
  strip.setPixelColor(6, 0, 0, 0);
  strip.setPixelColor(5, 0, 0, 0);
  strip.setPixelColor(4, 0, 0, 0);
  strip.setPixelColor(3, 0, 0, 0);
  strip.setPixelColor(2, 0, 0, 127);
  strip.setPixelColor(1, 0, 0, 0);
  strip.setPixelColor(0, 127, 0, 0);
  strip.show();
  delay(pause);
  
  //set rgb values for sixth column
  strip.setPixelColor(7, 127, 0, 0);
  strip.setPixelColor(6, 0, 0, 0);
  strip.setPixelColor(5, 127, 0, 0);
  strip.setPixelColor(4, 0, 0, 0);
  strip.setPixelColor(3, 0, 0, 0);
  strip.setPixelColor(2, 0, 0, 127);
  strip.setPixelColor(1, 0, 0, 0);
  strip.setPixelColor(0, 127, 0, 0);
  strip.show();
  delay(pause);
  
  //set rgb values for seventh column
  strip.setPixelColor(7, 127, 0, 0);
  strip.setPixelColor(6, 0, 0, 0);
  strip.setPixelColor(5, 0, 0, 0);
  strip.setPixelColor(4, 0, 0, 0);
  strip.setPixelColor(3, 0, 0, 127);
  strip.setPixelColor(2, 0, 0, 0);
  strip.setPixelColor(1, 127, 0, 0);
  strip.setPixelColor(0, 0, 0, 0);
  strip.show();
  delay(pause);
  
  //set rgb values for eighth column
  strip.setPixelColor(7, 0, 0, 0);
  strip.setPixelColor(6, 0, 0, 0);
  strip.setPixelColor(5, 127, 0, 0);
  strip.setPixelColor(4, 127, 0, 0);
  strip.setPixelColor(3, 127, 0, 0);
  strip.setPixelColor(2, 127, 0, 0);
  strip.setPixelColor(1, 0, 0, 0);
  strip.setPixelColor(0, 0, 0, 0);
  strip.show();
  delay(pause);
  
  //set rgb values for ninth column - all off to give you a gap between images
  strip.setPixelColor(7, 0, 0, 0);
  strip.setPixelColor(6, 0, 0, 0);
  strip.setPixelColor(5, 0, 0, 0);
  strip.setPixelColor(4, 0, 0, 0);
  strip.setPixelColor(3, 0, 0, 0);
  strip.setPixelColor(2, 0, 0, 0);
  strip.setPixelColor(1, 0, 0, 0);
  strip.setPixelColor(0, 0, 0, 0);
  strip.show();
  delay(pause);
  delay(pause);
  delay(pause);
 
}


