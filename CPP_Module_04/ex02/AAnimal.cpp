#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal default constructor called!\n";
}

AAnimal::AAnimal(AAnimal const& src)
{
	this->_type = src._type;
	std::cout << "AAnimal copy constructor called!\n";
}

AAnimal& AAnimal::operator=(AAnimal const& src)
{
	this->_type = src._type;
	return (*this);
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called!\n";
}

std::string	AAnimal::getType() const
{
	return this->_type;
}