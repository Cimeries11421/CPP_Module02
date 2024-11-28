#ifndef POINT_HPP
#define POINT_HPP


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


#include "Fixed.hpp"

class	Point
{
//	private:

	public :

	Fixed	_x;
	Fixed	_y;

//	public:
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
