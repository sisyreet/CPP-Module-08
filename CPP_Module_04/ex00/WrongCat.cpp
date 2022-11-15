#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor called!\n";
	this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const& src)
{
	this->_type = src._type;
	std::cout << "WrongCat copy constructor called!\n";
}

WrongCat& WrongCat::operator=(WrongCat const& src)
{
	this->_type = src._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called!\n";
}

void	WrongCat::makeSound() const
{
	std::cout << "WrongMeow! (^・x・^)\n";
}

std::string	WrongCat::getType() const
{
	return this->_type;
}