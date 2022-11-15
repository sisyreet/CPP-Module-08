#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called!\n";
	this->_type = "Dog";
}

Dog::Dog(Dog const& src)
{
	this->_type = src._type;
	std::cout << "Dog copy constructor called!\n";
}

Dog& Dog::operator=(Dog const& src)
{
	this->_type = src._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!\n";
}

void	Dog::makeSound() const
{
	std::cout << "Bark! ▼・ᴥ・▼\n";
}

std::string	Dog::getType() const
{
	return this->_type;
}