#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(const Fixed &x, const Fixed &y) : _x(x), _y(y) {}

Point::Point(const Point &other)
{
	*this = other;
}

Point	&Point::operator=(const Point &other)
{
	if (this != &other)
	{
		this->_x = other.getFixed_x();
		this->_y = other.getFixed_y();
	}
	return (*this);
}

Point::~Point() {}

Fixed	Point::getFixed_x() const
{
	return (this->_x);
}

Fixed	Point::getFixed_y() const 
{
	return (this->_y);	
}

