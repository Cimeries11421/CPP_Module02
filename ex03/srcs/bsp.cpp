#include "Point.hpp"
#include <iostream>

static Fixed	getArea(Point const a, Point const b, Point const c)
{
/*	Fixed Area = Fixed(0.5f) * (a.getFixed_x() * (b.getFixed_y() - c.getFixed_y())
							+ b.getFixed_x() * (c.getFixed_y() - a.getFixed_y())
							+ c.getFixed_x() * (a.getFixed_y() - b.getFixed_y()));*/

	Fixed Area = a.getFixed_x() / b.getFixed_x();
	std::cout << Area << std::endl; 
	return (Area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed A1 = getArea (a, b ,c);
	Fixed A2 = getArea (a, b, point);
	Fixed A3 = getArea (a, point,c);
	Fixed A4 = getArea (point, b ,c);

	std::cout << A1 << std::endl;
	std::cout << A2 + A3 + A4 << std::endl;
	if (A2 == 0 || A3 == 0 || A4 == 0)
		return (false);	
	if (A2 + A3 + A4 == A1)
		return (true);
	return (false);
}
