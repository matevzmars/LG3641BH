/*
Arduino LG3641BH example

This example demonstrates how to show number on LG3641BH
screen. Number is sent to Arduino over serial communication.

Written by Matevž Marš, march 2016
*/

#include "LG3641BH.h"


#define sec 5 //define how long should numbers be visible

int pins[12] = {3,7,10,12,13,4,9,11,2,5,6,8}; //see table below
/* connect LG3641BH pin to Arduino pin as shown in table below:
LG3641BH pin |  Arduino pin
          A  |  3
          B  |  7
          C  |  10
          D  |  12
          E  |  13
          F  |  4
          G  |  9
          DP |  11
          D1 |  2
          D2 |  5
          D3 |  6
          D4 |  8
*/

LG3641BH screen(pins,'B'); //I use B version of LG3641BH

void setup() {
  Serial.begin(9600);
  
  screen.begin(); //initialize pins and screen
  Serial.println("LG3641BH initialized");
}


void loop() {
  if(Serial.available()>0){
    screen.writeUFloat(Serial.parseFloat(),sec);  
  }  

}
