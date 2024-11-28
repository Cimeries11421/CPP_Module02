#include "Point.hpp"


#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define BLUE "\x1b[34m"
#define YELLOW "\x1b[33m"
#define ORANGE "\x1b[38;2;255;165;0m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"
#define LIGHT_CYAN "\x1b[96m"
#define LIGHT_BLUE "\x1b[94m"
#define PINK "\001\x1b[38;2;255;105;180m\002"
#define RESET "\001\x1b[0m\002"




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

