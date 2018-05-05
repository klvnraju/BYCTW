#include <Adafruit_CircuitPlayground.h>
#include "tones.h"
#include "melodys.h"

#define red 100
#define green 100
#define blue 100

void setup() {
  CircuitPlayground.begin();
}

void setLeds(bool* n, int r, int g, int b) {
  for (int thisLed = 0; thisLed < 10; thisLed++) {
    if(n[thisLed]){
      CircuitPlayground.setPixelColor(thisLed, r, g, b);
    }
    else {
      CircuitPlayground.setPixelColor(thisLed, 0, 0, 0);
    }
  }
}

void playMelody(int n) {
    for (int thisNote = 0; thisNote < numNotes; thisNote++) { // play notes of the melody
      // to calculate the note duration, take one second divided by the note type.
      int noteDuration = 700 / noteDurations[n][thisNote];
      CircuitPlayground.playTone(melody[n][thisNote], noteDuration);
      setLeds(leds[thisNote], 100, 0, 0);
 
      // to distinguish the notes, set a minimum time between them.
      //   the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
    }
}

void loop() {
  setLeds(leds_off, 0, 0, 0);
  if(CircuitPlayground.leftButton()) {   // if reading the left button returns true
    CircuitPlayground.setPixelColor(0, red, green, blue);
    CircuitPlayground.playTone(440,100);    // output a 440 Hz sound for a tenth of a second
  }
  else if(CircuitPlayground.rightButton()) {   // play when we press the right button
    playMelody(0);
  }
  else if(CircuitPlayground.readCap(1)>50) {
    if(CircuitPlayground.slideSwitch()) {
      playMelody(0);
    } else {
      CircuitPlayground.setPixelColor(3, red, 0, 0);
      CircuitPlayground.playTone(NOTE_C5,100);   // output a 1760 Hz sound for a tenth of a second 
    }
  }
  else if(CircuitPlayground.readCap(0)>50) {
    if(CircuitPlayground.slideSwitch()) {
      playMelody(1);
    } else {
      CircuitPlayground.setPixelColor(3, 0, green, 0);
      CircuitPlayground.playTone(NOTE_D5,100);   // output a 1760 Hz sound for a tenth of a second 
    }
  }
  else if(CircuitPlayground.readCap(2)>50) {
    if(CircuitPlayground.slideSwitch()) {
      playMelody(2);
    } else {
      CircuitPlayground.setPixelColor(1, 0, 0, blue);
      CircuitPlayground.playTone(NOTE_E5,100);   // output a 1760 Hz sound for a tenth of a second 
    }
  }
  else if(CircuitPlayground.readCap(3)>50) {
    if(CircuitPlayground.slideSwitch()) {
      playMelody(3);
    } else {
      CircuitPlayground.setPixelColor(1, red, green, 0);
      CircuitPlayground.playTone(NOTE_F5,100);   // output a 1760 Hz sound for a tenth of a second 
    }
  }
  else if(CircuitPlayground.readCap(10)>50) {
    if(CircuitPlayground.slideSwitch()) {
      playMelody(4);
    } else {
      CircuitPlayground.setPixelColor(8, red, 0, blue);
      CircuitPlayground.playTone(NOTE_G5,100);   // output a 1760 Hz sound for a tenth of a second 
    }
  }
  else if(CircuitPlayground.readCap(9)>50) {
    CircuitPlayground.setPixelColor(8, 0, green, blue);
    CircuitPlayground.playTone(NOTE_A5,100);   // output a 1760 Hz sound for a tenth of a second
  }
  else if(CircuitPlayground.readCap(6)>50) {
    CircuitPlayground.setPixelColor(6, red, green, blue);
    CircuitPlayground.playTone(NOTE_B5,100);   // output a 1760 Hz sound for a tenth of a second
  }
  else if(CircuitPlayground.readCap(12)>50) {
    CircuitPlayground.setPixelColor(6, red, green, blue);
    CircuitPlayground.playTone(NOTE_C6,100);   // output a 1760 Hz sound for a tenth of a second
  }
}
