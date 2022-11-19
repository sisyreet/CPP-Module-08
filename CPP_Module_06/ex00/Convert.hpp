#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <string>
#include <limits.h>
#include <cmath>

class Convert
{
	std::string _line;

public:

	Convert();
	Convert(char*);
	Convert(Convert const& src);
	Convert& operator=(Convert const& src);
	~Convert();

	char	toChar();
	int		toInt();
	float	toFloat();
	double	toDouble();

	void	printValue();
};

std::ostream& operator<<(std::ostream& os, Convert const& src);

#endif