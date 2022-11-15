#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called!\n";
}

Animal::Animal(Animal const& src)
{
	this->_type = src._type;
	std::cout << "Animal copy constructor called!\n";
}

Animal& Animal::operator=(Animal const& src)
{
	this->_type = src._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called!\n";
}

void	Animal::makeSound() const
{
	std::cout << "RRRRR! ʕ •ᴥ•ʔ \n";
}

std::string	Animal::getType() const
{
	return this->_type;
}