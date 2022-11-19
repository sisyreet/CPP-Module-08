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

	bool operator>(Fixed const& rhs) const;
	bool operator<(Fixed const& rhs) const;
	bool operator>=(Fixed const& rhs) const;
	bool operator<=(Fixed const& rhs) const;
	bool operator==(Fixed const& rhs) const;
	bool operator!=(Fixed const& rhs) const;

	Fixed operator+(Fixed const& rhs) const;
	Fixed operator-(Fixed const& rhs) const;
	Fixed operator*(Fixed const& rhs) const;
	Fixed operator/(Fixed const& rhs) const;

	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);

	static Fixed& min(Fixed& a, Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);
	static Fixed const& min(Fixed const& a, Fixed const& b);
	static Fixed const& max(Fixed const& a, Fixed const& b);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

};

std::ostream& operator<<(std::ostream& os, Fixed const& rhs);

#endif