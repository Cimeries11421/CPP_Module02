#include "Point.hpp"
#include <iostream>

int main (void) 
{
	Point	A(Fixed(5), Fixed(5));
	Point	B(Fixed(6), Fixed(3));
	Point	C(Fixed(1), Fixed(2));
	Point	point(Fixed(4), Fixed(3));

	std::cout << "A : (x = " << A.getFixed_x() << ", y = " << A.getFixed_y() << ") "<< std::endl;
	std::cout << "B : (x = " << B.getFixed_x() << ", y = " << B.getFixed_y() << ") "<< std::endl;
	std::cout << "C : (x = " << C.getFixed_x() << ", y = " << C.getFixed_y() << ") "<< std::endl;
	std::cout << "point : (x = " << point.getFixed_x() << ", y = " << point.getFixed_y() << ") \n"<< std::endl;
/*	if (bsp(A, B, C, point) == true)
		std::cout << "True : The point is in the triangle" << std::endl;
	else
		std::cout << "False : The point is not in the triangle" << std::endl;*/


	std::cout << (Fixed(5) * Fixed(2)) << std::endl;
	std::cout << (Fixed(0.5f) / Fixed(2)) << std::endl;
	return (0);
} 
