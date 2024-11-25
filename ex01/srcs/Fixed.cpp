#include "Fixed.hpp"

Fixed::Fixed() : _nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/*Fixed::Fixed(int const nbr) : _nbr(nbr) 
{
	std::cout << "Parametric constructor called" << std::endl;
}*/

Fixed::Fixed(const int nbr)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nbr = nbr << this->_FractionalPart;
}

Fixed::Fixed(const float nbr)
{
	std::cout << "Float constructor called" << std::endl;
	this->_nbr = roundf(nbr * (1 << this->_FractionalPart)); // 1 << 8 = 256. Can't use bit shifting with float
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed	&Fixed::operator=(const Fixed &other)
{	
	std::cout << "Copy assignement operator called" << std::endl;
	if (this != &other) //test if it's not already the same class
		this->_nbr = other.getRawBits();
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

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

std::ostream	&operator<<(std::ostream &out, const Fixed &other)
{
	out << other.toFloat();
	return (out);
}
