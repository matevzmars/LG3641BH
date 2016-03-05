/* 
LG3641BH.h - Library for LG3641BH 4x7 segment display
Created by Matevž Marš, march 2016
Released into the public domain
*/

#ifndef LG3641BH_h
#define LG3641BH_h

#include "Arduino.h"

class LG3641BH
{
	public:
		LG3641BH(int pins[12], char type);
		void begin(void);
		int number(int num);
		int writeNumber(int num, int pos);
		int writeFloat(float num, int sec);
		int writeInt(int num, int sec);
	private:
		int _pins[12];
		int _state0;
		int _state1;
};

#endif