#ifndef _RING_H
#define _RING_H
#include "Circle.h"

class Ring : public Circle {
	public:
		Ring(const char *n, double outer, double inner);
		~Ring();
		double calcPerimeter() const;
		double calcArea() const;
	private:
		double innerradius;
};

#endif
