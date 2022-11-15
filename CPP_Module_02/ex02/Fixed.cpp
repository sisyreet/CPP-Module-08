#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed() : _fix(0)
{
	// std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const& src)
{
	// std::cout << "Copy constructor called\n";
	this->_fix = src.getRawBits();
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called\n";
}

Fixed::Fixed(int const integer) : _fix(integer << _nfb) // сдвиг на 8 бит, из 10 получается 2560
{
	// std::cout << "Int constructor called\n";
}

Fixed::Fixed(float const floatingPointNumber) : _fix(roundf(floatingPointNumber * (1 << _nfb))) // округлить до инта 42.42 * 256
{
	// std::cout << "Float constructor called\n";
}

Fixed& Fixed::operator=(Fixed const& rhs)
{
	// std::cout << "Copy assignment operator called\n";
	if (this != &rhs) 
	    this->_fix = rhs.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const& rhs) const 
{
	return _fix > rhs._fix; 
}

bool Fixed::operator<(Fixed const& rhs) const
{
	return _fix < rhs._fix;
}

bool Fixed::operator>=(Fixed const& rhs) const 
{
	return _fix >= rhs._fix;
}

bool Fixed::operator<=(Fixed const& rhs) const
{
	return _fix <= rhs._fix;
}

bool Fixed::operator==(Fixed const& rhs) const
{
	return _fix == rhs._fix;
}
	
bool Fixed::operator!=(Fixed const& rhs) const
{
	return this->_fix != rhs._fix;
}

Fixed Fixed::operator+(Fixed const& rhs) const
{
	return this->toFloat() + rhs.toFloat();
}

Fixed Fixed::operator-(Fixed const& rhs) const
{
	return this->toFloat() - rhs.toFloat();
}

Fixed Fixed::operator*(Fixed const& rhs) const
{
	return this->toFloat() * rhs.toFloat();
}

Fixed Fixed::operator/(Fixed const& rhs) const
{
	return this->toFloat() / rhs.toFloat();
}

Fixed Fixed::operator++()
{
	this->_fix++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp;
	temp.setRawBits(this->_fix++);
	return temp;
}

Fixed Fixed::operator--()
{
	this->_fix--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed temp;
	temp.setRawBits(this->_fix--);
	return temp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	else 
		return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	else
		return b;
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b)
{
	if (a < b)
		return a;
	else 
		return b;
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b)
{
	if (a > b)
		return a;
	else
		return b;
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "getRawBits member function called\n";
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