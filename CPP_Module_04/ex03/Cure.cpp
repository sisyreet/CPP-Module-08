#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(std::string const& type)
{
	this->_type = type;
}

Cure::Cure(Cure const& src)
{
	this->_type = src._type;
}

Cure& Cure::operator=(Cure const& src)
{
	this->_type = src._type;
	return (*this);
}

Cure::~Cure()
{
}

AMateria* Cure::clone() const
{
	Cure	*temp = new Cure(*this);
	return (temp);
}

void Cure::use(ICharacter& target)
{
	std::string name = target.getName();
	std::cout << this->_type << ": * shoots an ice bolt at " << name << " *\n";
}
