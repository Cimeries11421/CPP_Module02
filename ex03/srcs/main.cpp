#include "Point.hpp"
#include <iostream>

int main (void) 
{
	Point	A(Fixed(5), Fixed(5));
	Point	B(Fixed(6), Fixed(3));
	Point	C(Fixed(1), Fixed(2));
	Point	point(Fixed(4), Fixed(3));

	std::cout << "A : (x = " << A.getFixed_x() << ", y = " << A.getFixed_y() << ") "<< std::endl;
	bsp(A, B, C, point);
}
