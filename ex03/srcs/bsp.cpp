#include "Point.hpp"
#include <iostream>

using namespace std; //enlever

static Fixed	getArea(Point const a, Point const b, Point const c)
{
		
	cout << "A -> x = " <<a._x.getRawBits() << " y = " << a._y.getRawBits() << endl;
	cout << "B -> x = " <<b._x.getRawBits() << " y = "  << b._y.getRawBits() << endl;
	cout << "C -> x = " <<c._x.getRawBits() << " y = " << c._y.getRawBits() << "\n"<< endl;

	Fixed Area = Fixed(0.5f) * (a.getFixed_x() * (b.getFixed_y() - c.getFixed_y())
							+ b.getFixed_x() * (c.getFixed_y() - a.getFixed_y())
							+ c.getFixed_x() * (a.getFixed_y() - b.getFixed_y()));

//	Fixed Area = a.getFixed_x() / b.getFixed_x();
//	std::cout << Area << std::endl; 
	return (Area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed A1 = getArea (a, b ,c);
	Fixed A2 = getArea (a, b, point);
	Fixed A3 = getArea (a, point,c);
	Fixed A4 = getArea (point, b ,c);

	Fixed total = A2 + A3 + A4;

	std::cout << BLUE <<"Aire de ABC  = " << RESET << A1 << " | ";
	std::cout << A1.getRawBits() << std::endl;

	std::cout << PINK << "Aire total des 3 triangles  = " << RESET << total << " | ";
	std::cout << total.getRawBits() << std::endl;


	if (A2 == 0 || A3 == 0 || A4 == 0)
		return (false);	
	if (A2 + A3 + A4 == A1)
		return (true);
	return (false);
}
