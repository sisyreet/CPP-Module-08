#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{

	int					_fix;
	static const int	_nfb = 8;

public:

	Fixed();
	Fixed(Fixed const& src);						//	конструктор копирования, создает точную копию класса, который подается как исходник
	~Fixed();
	Fixed& operator=(Fixed& rhs);			// имплеметнация оператора присваивания (инициализиации), 
											// содержимое объекта замещается новым содержимым
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif