#include "Fixed.hpp"

Fixed::Fixed() : _nbr(0) {}

Fixed::Fixed(const int nbr)
{
	this->_nbr = nbr << this->_FractionalPart;
}

Fixed::Fixed(const float nbr)
{
	this->_nbr = roundf(nbr * (1 << this->_FractionalPart)); // 1 << 8 = 256. Can't use bit shifting with float
}

Fixed::Fixed(const Fixed &other)
{
	*this = other;
}

Fixed	&Fixed::operator=(const Fixed &other)
{	
	if (this != &other) //test if it's not already the same class
		this->_nbr = other.getRawBits();
	return *this;
}

Fixed::~Fixed() {}

int	Fixed::getRawBits(void) const 
{
	return (this->_nbr);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nbr = raw;
}

int		Fixed::toInt(void) const
{
	int nbr = this->_nbr >> this->_FractionalPart;
	return (nbr);
}

float	Fixed::toFloat(void) const
{
	float nbr = static_cast<float>(this->_nbr) / static_cast<float>(1 << this->_FractionalPart);
	return (nbr);
}




//operators overloaded

float	Fixed::operator+(Fixed other) const
{
	return (this->toFloat() + other.toFloat());	 	
}

float	Fixed::operator-(Fixed other) const
{
	return (this->toFloat() - other.toFloat());	 	
}

float	Fixed::operator*(Fixed other) const
{
	return (this->toFloat() * other.toFloat());	 	
}

float	Fixed::operator/(Fixed other) const
{
	return (this->toFloat() / other.toFloat());	 	
}

bool	Fixed::operator>(Fixed other) const
{
	if (this->_nbr > other._nbr)
		return true;
	else
		return false;
}

bool	Fixed::operator<(Fixed other) const
{
	if (this->_nbr < other._nbr)
		return true;
	else
		return false;
}

bool	Fixed::operator>=(Fixed other) const
{
	if (this->_nbr >= other._nbr)
		return true;
	else
		return false;
}

bool	Fixed::operator<=(Fixed other) const
{
	if (this->_nbr <= other._nbr)
		return true;
	else
		return false;
}

bool	Fixed::operator==(Fixed other) const
{
	if (this->_nbr == other._nbr)
		return true;
	else
		return false;
}

bool	Fixed::operator!=(Fixed other) const
{
	if (this->_nbr != other._nbr)
		return true;
	else
		return false;
}

Fixed	&Fixed::operator++() //pre-increment
{
	++this->_nbr;
	return (*this);
}

Fixed	&Fixed::operator--()
{
	--this->_nbr;
	return (*this);
}

Fixed	Fixed::operator++(int) //post-increment, int differentiates from pre-increment
{
	Fixed	tmp = *this;
	++this->_nbr;
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	tmp = *this;
	--this->_nbr;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &one, Fixed &two)
{
	if (one.getRawBits() <= two.getRawBits())
		return (one);
	else
		return (two);
}

const Fixed	&Fixed::min(const Fixed &one, const Fixed &two)
{
	if (one.getRawBits() <= two.getRawBits())
		return (one);
	else
		return (two);
}

Fixed	&Fixed::max(Fixed &one, Fixed &two)
{
	if (one.getRawBits() >= two.getRawBits())
		return (one);
	else
		return (two);
}

const Fixed	&Fixed::max(const Fixed &one, const Fixed &two)
{
	if (one.getRawBits() >= two.getRawBits())
		return (one);
	else
		return (two);
}

std::ostream	&operator<<(std::ostream &out, const Fixed &other)
{
	out << other.toFloat();
	return (out);
}

