#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const& type)
{
	this->_type = type;
}

AMateria::AMateria(AMateria const& src)
{
	this->_type = src._type;
}

// AMateria& AMateria::operator=(AMateria const& src) useless coz it is abstract class
// {
// 	this->_type = src._type;
// 	return (*this);
// }

AMateria::~AMateria()
{
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Abstract materia is used on " << target.getName() << std::endl;
}