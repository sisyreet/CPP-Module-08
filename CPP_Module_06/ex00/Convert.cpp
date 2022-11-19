#include "Convert.hpp"

Convert::Convert() {}

Convert::Convert(char* line)
{
	this->_line = line;
}

Convert::Convert(Convert const& src)
{	
	this->_line = src._line;
}

Convert& Convert::operator=(Convert const& src)
{
	if (this == &src)
		return *this;
	this->_line = src._line;
	return *this;
}

Convert::~Convert() {}

char	Convert::toChar()
{
	return (static_cast<char>(toFloat()));
}

int		Convert::toInt()
{
	return (static_cast<int>(toFloat()));
}

float	Convert::toFloat()
{
	float toFloat = atof(_line.c_str());
	return toFloat;
}

double	Convert::toDouble()
{
	return (static_cast<double>(toFloat()));
}

void	Convert::printValue()
{
	/* char */
	if (toFloat() < CHAR_MIN || toFloat() > CHAR_MAX || isnan(toFloat()))
		std::cout << "char: impossible\n";
	else if (isprint(toChar()))
		std::cout << "char: " << toChar() << std::endl;
	else
		std::cout << "char: Non displayable\n";
	
	/* int */
	if (toFloat() < INT_MIN || toFloat() > INT_MAX || isnan(toFloat()))
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << toInt() << std::endl;

	/* float and double */
	if (toFloat() - toInt() == 0)
	{
		std::cout << "float: " << toFloat() << ".0f" << std::endl;
		std::cout << "double: " << toDouble() << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << toFloat() << "f" << std::endl;
		std::cout << "double: " << toDouble() << std::endl;
	}
}