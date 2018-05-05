#include "tones.h"
int melody[5][16] = {
{NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0},
 
  {NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0},
 
  {NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0, 0},
 
  {NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0},
 
  {NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0, 0}  
 };
 int numNotes = 16; // Number of notes in each melody
 
 int noteDurations[5][16] = {     // note durations
  {12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12},
 
  {12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12},
 
  {9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12, 12},
 
  {12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12},
 
  {9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12, 12}
};

bool leds[16][10] = {
  {1,0,0,0,0,0,0,0,0,1},
  {1,1,0,0,0,0,0,0,1,1},
  {0,0,0,0,0,0,0,0,0,0},
  {1,1,1,1,0,0,1,1,1,1},
  {0,0,0,0,0,0,0,0,0,0},
  {1,1,0,0,0,0,0,0,1,1},
  {1,1,0,0,0,0,0,0,1,1},
  {1,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,1,1},
  {1,1,1,1,0,0,1,1,1,1},
  {1,1,1,1,0,0,1,1,1,1},
  {1,1,0,0,0,0,0,0,0,1},
  {1,0,0,0,0,0,0,0,0,1},
  {0,0,0,0,0,0,0,0,0,0},
  {1,0,0,0,0,0,0,0,1,1}
};

bool leds_off[10] = {0,0,0,0,0,0,0,0,0,0};

