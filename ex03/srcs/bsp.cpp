#include "Point.hpp"
#include <iostream>


bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed x = (b.getFixed_x() - a.getFixed_x()) * (point.getFixed_y() - a.getFixed_y())
				- (b.getFixed_y() - a.getFixed_y()) * (point.getFixed_x() - a.getFixed_x());
    Fixed y = (c.getFixed_x() - b.getFixed_x()) * (point.getFixed_y() - b.getFixed_y())
				- (c.getFixed_y() - b.getFixed_y()) * (point.getFixed_x() - b.getFixed_x());
    Fixed z = (a.getFixed_x() - c.getFixed_x()) * (point.getFixed_y() - c.getFixed_y())
				- (a.getFixed_y() - c.getFixed_y()) * (point.getFixed_x() - c.getFixed_x());

    if ((x > 0 && y > 0 && z > 0) || (x < 0 && y < 0 && z < 0))
        return (true);
    return (false);
}
