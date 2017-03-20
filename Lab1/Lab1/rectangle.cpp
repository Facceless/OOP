#include "stdafx.h"
#include "cmath"
#include "rectangle.h"


void rectangle::Change(double aNew, double bNew) {
	aNew /= 100;
	bNew /= 100;
	array[0] = aNew*array[0] + array[0];
	array[1] = bNew*array[1] + array[1];
}
double rectangle::Area() {
	return array[0] * array[1];
}
double rectangle::Dia(){
	return sqrt(array[1] * array[1] + array[1] * array[1]);
}
double rectangle::P() {
	return array[1] * 2 + array[1] * 2;
}
