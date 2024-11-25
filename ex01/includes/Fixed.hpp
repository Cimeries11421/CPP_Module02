#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed
{
	private:
	
	int	_nbr;
	const static int _FractionalPart = 8;

	public:

	Fixed();
	Fixed(const Fixed &other);
//ex01
	Fixed(const int nbr);
	Fixed(const float nbr);
//
	~Fixed();
	Fixed	&operator=(const Fixed &other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

//ex01
	int		toInt(void) const;
	float	toFloat(void) const;
//

};

std::ostream	&operator<<(std::ostream &out, const Fixed &other);

#endif

