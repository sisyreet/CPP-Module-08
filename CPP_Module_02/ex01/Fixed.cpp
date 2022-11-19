#include "Fixed.hpp"
#include <cmath>

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

Fixed& Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Copy assignment operator called\n";
	if (this != &rhs) 
	    this->_fix = rhs.getRawBits();
	return *this;
}

Fixed::Fixed(int const integer) : _fix(integer << _nfb) // сдвиг на 8 бит, из 10 получается 2560 // *256
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(float const floatingPointNumber) : _fix(roundf(floatingPointNumber * (1 << _nfb))) // округлить до инта 42.42 * 256
{
	std::cout << "Float constructor called\n";
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

float Fixed::toFloat(void) const
{
	return static_cast<float>(this->_fix) / (1 << _nfb); //кастуем в флоат результат деления числа на 256
}

int Fixed::toInt(void) const
{
	return this->_fix >> _nfb; //сдвигаем на 8 битов вправо, из 2560 получаем 10
}

std::ostream& operator<<(std::ostream& os, Fixed const& rhs) {
    return os << rhs.toFloat();
}