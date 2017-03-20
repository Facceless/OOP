#include "stdafx.h"
#include "rectangle.h"


void rectangle::Change(double aNew, double bNew) {
	aNew /= 100;
	bNew /= 100;
	a = aNew*a+a;
	b = bNew*b+b;
}
double rectangle::Area() {
	return a*b;
}
double rectangle::Dia(){
	return (a*a+b*b);
}
double rectangle::P() {
	return a*2+b*2;
}
