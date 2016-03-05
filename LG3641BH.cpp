/* 
LG3641BH.h - Library for LG3641BH 4x7 segment display
Created by Matevž Marš, march 2016
Released into the public domain
*/

#include "Arduino.h"
#include "LG3641BH.h"

#define numWait 700

LG3641BH::LG3641BH(int pins[12], char type){
	for(int i=0;i<12;i++){
		_pins[i] = pins[i];
	}
	
	if(type == 'A'){
		_state0 = LOW;
		_state1 = HIGH;
	}
	else if(type == 'B'){
		_state0 = HIGH;
		_state1 = LOW;
	}
}

void LG3641BH::begin(void){
	for(int i=0;i<12;i++){
		pinMode(_pins[i],OUTPUT);
	}
	for(int i=0;i<8;i++){
		digitalWrite(_pins[i],_state0);
	}
	for(int i=8;i<12;i++){
		digitalWrite(_pins[i],_state1);
	}
}

int LG3641BH::number(int num){
	if(num<0 || num>10) return 0; //n=10 corresponds dot segment
	
	switch(num){
		case 0:
			digitalWrite(_pins[0],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[1],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[1],_state0);
			digitalWrite(_pins[2],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[2],_state0);
			digitalWrite(_pins[3],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[3],_state0); 
			digitalWrite(_pins[4],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[4],_state0); 
			digitalWrite(_pins[5],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[5],_state0);
			return 1;
		case 1:
			digitalWrite(_pins[1],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[1],_state0);
			digitalWrite(_pins[2],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[2],_state0);
			
			//added for the same number duration
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			return 1;      
		case 2:
			digitalWrite(_pins[0],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[1],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[1],_state0);
			digitalWrite(_pins[6],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[6],_state0);
			digitalWrite(_pins[4],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[4],_state0);
			digitalWrite(_pins[3],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[3],_state0);
			
			//added for the same number duration
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			return 1;
		case 3:
			digitalWrite(_pins[0],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[1],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[1],_state0); 
			digitalWrite(_pins[6],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[6],_state0);
			digitalWrite(_pins[2],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[2],_state0);
			digitalWrite(_pins[3],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[3],_state0);
			
			//added for the same number duration
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);			
			return 1;
		case 4:
			digitalWrite(_pins[5],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[5],_state0);
			digitalWrite(_pins[6],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[6],_state0); 
			digitalWrite(_pins[1],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[1],_state0);
			digitalWrite(_pins[2],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[2],_state0);
			
			//added for the same number duration
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);			
			return 1;
		case 5:
			digitalWrite(_pins[0],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[5],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[5],_state0); 
			digitalWrite(_pins[6],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[6],_state0);
			digitalWrite(_pins[2],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[2],_state0);
			digitalWrite(_pins[3],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[3],_state0);
			
			//added for the same number duration
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);			
			return 1;
		case 6:
			digitalWrite(_pins[0],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[5],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[5],_state0); 
			digitalWrite(_pins[6],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[6],_state0);
			digitalWrite(_pins[2],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[2],_state0);
			digitalWrite(_pins[3],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[3],_state0);
			digitalWrite(_pins[4],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[4],_state0);
			
			//added for the same number duration
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);		
			return 1;
		case 7:
			digitalWrite(_pins[0],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[1],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[1],_state0);
			digitalWrite(_pins[2],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[2],_state0);
			
			//added for the same number duration
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			return 1;
		case 8:
			digitalWrite(_pins[0],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[1],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[1],_state0);
			digitalWrite(_pins[2],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[2],_state0);
			digitalWrite(_pins[3],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[3],_state0); 
			digitalWrite(_pins[4],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[4],_state0); 
			digitalWrite(_pins[5],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[5],_state0); 
			digitalWrite(_pins[6],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[6],_state0);
			return 1;
		case 9:
			digitalWrite(_pins[0],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			digitalWrite(_pins[1],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[1],_state0);
			digitalWrite(_pins[2],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[2],_state0);
			digitalWrite(_pins[3],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[3],_state0);
			digitalWrite(_pins[5],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[5],_state0); 
			digitalWrite(_pins[6],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[6],_state0);
			
			//added for the same number duration
			digitalWrite(_pins[0],_state0);
			delayMicroseconds(numWait);
			digitalWrite(_pins[0],_state0);
			return 1;
		case 10:
			digitalWrite(_pins[7],_state1);
			delayMicroseconds(numWait);
			digitalWrite(_pins[7],_state0);
			return 1; 
	}
	
}

int LG3641BH::writeNumber(int num, int pos){
	if(pos<1 || pos>4) return 2;
	  
	int a;
	  
	switch(pos){
		case 1:
			digitalWrite(_pins[8],_state0);
			a=number(num);
			digitalWrite(_pins[8],_state1);
			return a;
		case 2:
			digitalWrite(_pins[9],_state0);
			a=number(num);
			digitalWrite(_pins[9],_state1);
			return a;
		case 3:
			digitalWrite(_pins[10],_state0);
			a=number(num);
			digitalWrite(_pins[10],_state1);
			return a;
		case 4:
			digitalWrite(_pins[11],_state0);
			a=number(num);
			digitalWrite(_pins[11],_state1);
			return a;      
	}  
}

int LG3641BH::writeUFloat(float num, int sec){
	if(num<0 || num>9999) return 3;
	
	float temp=num;
	
	for(int j=0;j<50*sec;j++){
		num=temp;

		if(0<=num && num<10){
			num=num*1000;
			writeNumber(10,1);
		}
		else if(10<=num && num<100){
			num=num*100;
			writeNumber(10,2);
		}
		else if(100<=num && num<1000){
			num=num*10;
			writeNumber(10,3);
		}
		else if(1000<=num){
			num=num*1;
		}
		  
		int a = 0;
		a= (int)(num);
		  
		for(int i=4;i>0;i--){
			writeNumber(a%10,i);
			a=(a-a%10)/10;
		}
	}
	return 4;
}