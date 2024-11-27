#include "Point.hpp"
#include <iostream>

static Fixed	getArea(Point const a, Point const b, Point const c)
{
	Fixed Area = Fixed(0.5f) * (a.getFixed_x() * (b.getFixed_y() - c.getFixed_y())
							+ b.getFixed_x() * (c.getFixed_y() - a.getFixed_y())
							+ c.getFixed_x() * (a.getFixed_y() - b.getFixed_y()));

	return (Area);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed Area_abc = getArea (a, b ,c);

	Fixed Area_abp = getArea (a, b, point);
	Fixed Area_apc = getArea (a, point,c);
	Fixed Area_pbc = getArea (point, b ,c);

	if (Area_abp == 0 || Area_apc == 0 || Area_pbc == 0)
		return (false);
	Fixed totalArea= Area_abp + Area_pbc ; // a changer
	totalArea = totalArea + Area_apc;

	std::cout << "Area_abc = " << Area_abc << std::endl;
	std::cout << "totalArea = " << totalArea << std::endl;

	if (totalArea == Area_abc)
		return (true);
	return (false);

	//gérer le négatif ? et tester
}
