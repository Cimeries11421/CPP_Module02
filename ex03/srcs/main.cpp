#include "Point.hpp"
#include <iostream>

int main (void) 
{
	Point	A(Fixed(5), Fixed(5));
	Point	B(Fixed(6), Fixed(3));
	Point	C(Fixed(1), Fixed(2));
	Point	point(Fixed(4), Fixed(3));

	if (bsp(A, B, C, point) == true)
		std::cout << "True : The point is in the triangle" << std::endl;
	else
		std::cout << "False : The point is not in the triangle" << std::endl;
//

	//-----------------------------------------------------------------------//
	
/*	Point A(Fixed(2), Fixed(2));
	Point B(Fixed(2), Fixed(5));
	Point C(Fixed(6), Fixed(3));
	Point point (Fixed(2), Fixed(3.5f));

	if (bsp(A, B, C, point) == true)
		std::cout << "True : The point is in the triangle" << std::endl;
	else
		std::cout << "False : The point is not in the triangle" << std::endl;
*/

	//-----------------------------------------------------------------------/

	/*Point A(Fixed(2), Fixed(2));
	Point B(Fixed(2), Fixed(5));
	Point C(Fixed(6), Fixed(3));
	Point point (Fixed(6), Fixed(3));

	if (bsp(A, B, C, point) == true)
		std::cout << "True : The point is in the triangle" << std::endl;
	else
		std::cout << "False : The point is not in the triangle" << std::endl;
	*/
	return (0);
} 
