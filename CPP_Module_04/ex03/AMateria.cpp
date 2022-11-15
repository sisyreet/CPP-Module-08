#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default class constructor called!\n";
}

AMateria::AMateria(std::string const& type)
{
	this->_type = type;
	std::cout << "AMateria type class constructor called!\n";
}

AMateria::AMateria(AMateria const& src)
{
	this->_type = src._type;
	std::cout << "AMateria copy class constructor called!\n";
}

// AMateria& AMateria::operator=(AMateria const& src) useless
// {
// 	this->_type = src._type;
// 	return (*this);
// }

AMateria::~AMateria()
{
	std::cout << "AMateria destructor called!\n";
}

std::string const & AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	std::cout << "Abstract materia is used on " << target.getName() << std::endl;
}