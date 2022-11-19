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
	~Fixed();
	Fixed& operator=(Fixed& rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);

};

#endif