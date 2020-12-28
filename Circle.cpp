#include "Shape.h"
#include "Circle.h"
#include <cmath>

Circle::Circle(double width): Shape(width)
{
 
}
Circle::~Circle() = default;
double Circle::Area(){
	// pi*r^2 = Area of circle
    return 3.14159 * pow((width / 2), 2);
}
