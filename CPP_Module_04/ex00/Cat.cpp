#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor called!\n";
	this->_type = "Cat";
}

Cat::Cat(Cat const& src)
{
	this->_type = src._type;
	std::cout << "Cat copy constructor called!\n";
}

Cat& Cat::operator=(Cat const& src)
{
	this->_type = src._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!\n";
}

void	Cat::makeSound() const
{
	std::cout << "Meow! =^._.^=\n";
}

std::string	Cat::getType() const
{
	return this->_type;
}