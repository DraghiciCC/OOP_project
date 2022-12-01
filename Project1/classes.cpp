#include <windows.h>
#include <stdexcept>
#include <iostream>
#include <fstream>
#include "classes.h"

// Implementation for class DateTime
//setters and getters

int DateTime:::getYear() {
	return this->y;
}

int DateTime::getMonth() {
	return this->m;
}

int DateTime::getDay() {
	return this->d;
}
int DateTime::getHour() {
	return this->h;
}
int DateTime::getMin() {
	return this->min;
}
