#include <iostream>
#include <unistd.h>
#include "Arduino.h"
#include <stdio.h>
#include <chrono>
using namespace std;
//using namespace std::chrono;

//high_resolution_clock::time_point start_time;

void setup();
void loop();

int main(){
	//start_time = high_resolution_clock::now();
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

void pinMode(int pinNumber, int state){
	string strState;
	if (state == HIGH) {
		strState = "HIGH";
	} else {
		strState = "LOW";
	}
	print("pinMode("+to_string(pinNumber)+", "+strState+")");
}

/*int millis() {
   auto current_time = std::chrono::high_resolution_clock::now();
   std::cout << "Program has been running for " << std::chrono::seconds(current_time - start_time).count() << " seconds" << std::endl;
}*/
