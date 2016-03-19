/*areas.cpp contains all formulas and area calculations for each shape in 
separate functions*/

#include "constants.h"			//contains PI constant
#include <cmath>

//Calculates Area of circle 
double circleArea(double radius)
{
	double cArea = myConstants::pi*(pow(radius,2));
	return cArea;
}

//Calculates Area of rectangle
double rectangleArea(double length, double width)
{
	double rArea = length*width;
	return rArea;
}

//Calculates Area of square
double squareArea(double side)
{
	double sArea = pow(side,2);
	return sArea;
}

//Calculates Area of triangle
double triangleArea(double base, double height)
{
	double tArea = 0.5*base*height;
	return tArea;
}

//Calculates Area of pentagon
double pentagonArea(double pside)
{
	double a = sqrt(double(5));
	double pArea = 0.25 * sqrt(double(5*(5 + 2*a))) * pside * pside;
	return pArea;
}