#include <iostream>
#include <unistd.h>
#include "Arduino.h"
#include <stdio.h>
using namespace std;

void setup();
void loop();

int main(){
	setup();
	while(1)
		loop();
}



void print(string prt_str){
	cout << prt_str << endl;
}

/*arduino simulated functions*/
void delay(unsigned long ms) {
    usleep(ms * 1000);
}

void digitalWrite(int pinNumber, int state) {
	string strState;
	if (state == HIGH) {
		strState = "HIGH";
	} else {
		strState = "LOW";
	}
	print("digitalWrite("+to_string(pinNumber)+", "+strState+")");

}

