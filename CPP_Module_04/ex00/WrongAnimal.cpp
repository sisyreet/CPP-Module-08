#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called!\n";
}

WrongAnimal::WrongAnimal(WrongAnimal const& src)
{
	this->_type = src._type;
	std::cout << "WrongAnimal copy constructor called!\n";
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal const& src)
{
	this->_type = src._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called!\n";
}

void	WrongAnimal::makeSound() const
{
	std::cout << "... ಠ_ಠ ...\n";
}

std::string	WrongAnimal::getType() const
{
	return this->_type;
}