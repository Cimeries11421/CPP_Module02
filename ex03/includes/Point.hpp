#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class	Point
{
	private:
	Fixed	_x;
	Fixed	_y;

	public:
	Point();
	Point(const Fixed &_x, const Fixed &_y);
	Point(const Point &other);
	Point	&operator=(const Point &other);
	~Point();

	Fixed	getFixed_x() const;
	Fixed	getFixed_y() const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif
