#include "Arduino.h"

void setup(){
	print("setup running");
}

void loop() {
	print("loop ran");
	digitalWrite(13, HIGH);
	delay(1000);
}
