#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:

	int					_fix;
	static const int	_nfb = 8;

public:

	Fixed();
	Fixed(Fixed const& src);
	Fixed(const int integer);
	Fixed(const float floatingPointNumber);
	~Fixed();
	
	Fixed& operator=(Fixed const& rhs);
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& os, Fixed const& rhs);

#endif