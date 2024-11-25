#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	private:
	
	int	_nbr;
	const static int _fractionalPart = 8;

	public:

	Fixed();
	Fixed(int const nbr);
	Fixed(const Fixed &other);
	~Fixed();
	Fixed	&operator=(const Fixed &other);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

};

#endif

