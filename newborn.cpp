//This program calculates area of a circle/rectangle/square/triangle/pentagon. User can choose the shape. 
//Area is accordingly calculated and displayed.

#include <iostream>
#include <conio.h>
#include "areas.h"	//contains area declarations for each shape

// getShape() prompts the user to select a shape for which they want the area
char getShape()
{
	char shape;
	std::cout << "Select circle (c), rectangle (r), square (s), triangle (t), pentagon (p): ";
	std::cin >> shape;

	return shape;
}

// area() asks user to enter parameters of chosen shape,
// calculates area and then prints the area to console.
double area()
{
	char shape = getShape();
	switch (shape)					//switch loop chooses a shape depending on user input
	{

	case 'c':											//CIRCLE CHOSEN
	case 'C':
		double radius;
		std::cout << "Enter radius of circle: ";		//Radius of circle is input from user
		std::cin >> radius;

		circleArea(radius);								//Area of circle is calculated and printed
		std::cout << "The area of circle is " << circleArea(radius) << " square units." << std::endl;

		return circleArea(radius);
		

	case 'r':											//RECTANGLE CHOSEN
	case 'R':
		double length,width;
		std::cout << "Enter length of rectangle: ";		//Rectangle's length is input from user
		std::cin >> length;
		std::cout << "Enter width of rectangle: ";		//Rectangle's width is input from user
		std::cin >> width;

		rectangleArea(length,width);					//Rectangle area is calculated and printed
		std::cout << "The area of rectangle is " << rectangleArea(length,width) << " square units." << std::endl;

		return rectangleArea(length,width);
	

	case 's':											//SQUARE CHOSEN
	case 'S':
		double squareSide;
		std::cout << "Enter length of square's side: ";	//Square's side is input from user
		std::cin >> squareSide;

		squareArea(squareSide);							//Square area is calculated and printed
		std::cout << "The area of square is " << squareArea(squareSide) << " square units." << std::endl;

		return squareArea(squareSide);

	case 't':											//TRIANGLE CHOSEN
	case 'T':
		double base, height;
		std::cout << "Enter base of triangle: ";		//Base of triangle is input
		std::cin >> base;
		std::cout << "Enter height of triangle: ";		//Height of triangle is input
		std::cin >> height;

		triangleArea(base,height);						//Triangle area is calculated and printed
		std::cout << "The area of triangle is " << triangleArea(base,height) << " square units." << std::endl;

		return triangleArea(base,height);

	case 'p':														//PENTAGON CHOSEN
	case 'P':
		double pentaSide;											
		std::cout << "Enter length of one side of pentagon: ";		//User prompted to enter side's length of pentagon
		std::cin >> pentaSide;

		pentagonArea(pentaSide);									//Area of pentagon is calculated and printed
		std::cout << "The area of pentagon is " << pentagonArea(pentaSide) << " square units." << std::endl;

		return pentagonArea(pentaSide);

	default:														//When user enters input other than given characters,
		std::cout << "Invalid input. Try again.\n";					//switch is exited and program terminates.
		break;
	}
}



int main()
{
	char input;
	area();
	
	
	
	
	std::cout << "Press any key to continue...";
	getch();
	return 0;
}













