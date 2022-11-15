#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : _type("ice")
{
	std::cout << "Ice default class constructor called!\n";
}

Ice::Ice(std::string const& type) : _type(type)
{
	this->_type = type;
	std::cout << "Ice type class constructor called!\n";
}

Ice::Ice(Ice const& src)
{
	this->_type = src._type;
	std::cout << "Ice copy class constructor called!\n";
}

Ice& Ice::operator=(Ice const& src)
{
	this->_type = src._type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor called!\n";
}

std::string const & Ice::getType() const
{
	return this->_type;
}

Ice* Ice::clone() const
{
	Ice	*temp = new Ice;
	return (temp);
}

void Ice::use(ICharacter& target)
{
	std::string name = target.getName();
	std::cout << this->_type << ": * heals " << name << "'s wounds *\n";
}
