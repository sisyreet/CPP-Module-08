#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : _type("cure")
{
	std::cout << "Cure default class constructor called!\n";
}

Cure::Cure(std::string const& type) : _type(type)
{
	this->_type = type;
	std::cout << "Cure type class constructor called!\n";
}

Cure::Cure(Cure const& src)
{
	this->_type = src._type;
	std::cout << "Cure copy class constructor called!\n";
}

Cure& Cure::operator=(Cure const& src)
{
	this->_type = src._type;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure destructor called!\n";
}

std::string const & Cure::getType() const
{
	return this->_type;
}

Cure* Cure::clone() const
{
	Cure	*temp = new Cure;
	return (temp);
}

void Cure::use(ICharacter& target)
{
	std::string name = target.getName();
	std::cout << this->_type << ": * shoots an ice bolt at " << name << " *\n";
}
