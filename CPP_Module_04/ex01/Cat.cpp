#include "Cat.hpp"

Cat::Cat() 
{
	std::cout << "Cat default constructor called!\n";
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(std::string name) 
{
	std::cout << "Cat default constructor called!\n";
	this->_type = name;
	this->_brain = new Brain();
}

Cat::Cat(Cat const& src)
{
	std::cout << "Cat copy constructor called!\n";
	this->_type = src._type;
	this->_brain = new Brain();
}

Cat& Cat::operator=(Cat const& src)
{
	this->_type = src._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called!\n";
	delete this->_brain;
}

void	Cat::makeSound() const
{
	std::cout << "Meow! =^._.^=\n";
}

std::string	Cat::getType() const
{
	return this->_type;
}