#include <iostream>
void print(std::string);

void delay(unsigned long);

void digitalWrite(int, int);
void pinMode(int, int);

enum {
	HIGH = 255,
	LOW = 0
};

enum {
	INPUT,
	OUTPUT
};
