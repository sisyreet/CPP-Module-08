#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(std::string const& type)
{
	this->_type = type;
}

Ice::Ice(Ice const& src)
{
	this->_type = src._type;
}

Ice& Ice::operator=(Ice const& src)
{
	this->_type = src._type;
	return (*this);
}

Ice::~Ice()
{
}

AMateria* Ice::clone() const
{
	Ice	*temp = new Ice;
	return (temp);
}

void Ice::use(ICharacter& target)
{
	std::string name = target.getName();
	std::cout << this->_type << ": * heals " << name << "'s wounds *\n";
}
