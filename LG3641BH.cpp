/* 
LG3641BH.h - Library for LG3641BH 4x7 segment display
Created by Matevž Marš, march 2016
Released into the public domain
*/

#include "Arduino.h"
#include "LG3641BH.h"

#define numWait 700

LG3641BH::LG3641BH(int pins, char type);