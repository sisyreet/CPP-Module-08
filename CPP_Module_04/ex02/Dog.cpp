#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor called!\n";
	this->_type = "Dog";
	this->_brain = new Brain();
}


Dog::Dog(std::string name)
{
	std::cout << "Dog default constructor called!\n";
	this->_type = name;
	this->_brain = new Brain();
}

Dog::Dog(Dog const& src)
{
	std::cout << "Dog copy constructor called!\n";
	this->_type = src._type;
	this->_brain = new Brain();
}

Dog& Dog::operator=(Dog const& src)
{
	this->_type = src._type;
	this->_brain = src._brain;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called!\n";
	delete _brain;
}

void	Dog::makeSound() const
{
	std::cout << "Bark! ▼・ᴥ・▼\n";
}

std::string	Dog::getType() const
{
	return this->_type;
}