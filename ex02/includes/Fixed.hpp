#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <ostream>

class	Fixed
{
	private:
	
	int	_nbr;
	const static int _FractionalPart = 8;

	public:

	Fixed();
	Fixed(const Fixed &other);
	Fixed(const int nbr);
	Fixed(const float nbr);

	~Fixed();
	Fixed	&operator=(const Fixed &other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	int		toInt(void) const;
	float	toFloat(void) const;

//operator overloaded
//
	Fixed	operator+(Fixed other) const;
	Fixed	operator-(Fixed other) const;
	Fixed	operator*(Fixed other) const;
	Fixed	operator/(Fixed other) const;

	bool	operator>(Fixed other) const;
	bool	operator<(Fixed other) const;
	bool	operator>=(Fixed other) const;
	bool	operator<=(Fixed other) const;
	bool	operator==(Fixed other) const;
	bool	operator!=(Fixed other) const;
	
	Fixed	&operator++(); //pre-increment
	Fixed	&operator--();

	Fixed	operator++(int); //post-increment
	Fixed	operator--(int);

	static Fixed	&min(Fixed &one, Fixed &two);
	static const Fixed	&min(Fixed const &one, Fixed const &two);
	static Fixed	&max(Fixed &one, Fixed &two);
	static const Fixed	&max(Fixed const &one, Fixed const &two);
};

std::ostream	&operator<<(std::ostream &out, const Fixed &other);

#endif

