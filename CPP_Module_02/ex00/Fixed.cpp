#include "Fixed.hpp"

Fixed::Fixed() : _fix(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const& src)
{
	std::cout << "Copy constructor called\n";
	this->_fix = src.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(Fixed& src)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &src) 
	    this->_fix = src.getRawBits();
	return *this;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return this->_fix;
}

void Fixed::setRawBits(int const raw)
{
	this->_fix = raw;
}