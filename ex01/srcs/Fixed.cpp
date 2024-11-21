#include "Fixed.hpp"

Fixed::Fixed() : _nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const nbr) : _nbr(nbr) 
{
	std::cout << "Parametric constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator=(const Fixed &other)
{	
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other) //test if it's not already the same class
		this->_nbr = other.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const 
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nbr);
}

void	Fixed::setRawBits(int const raw)
{
	this->_nbr = raw;
}


