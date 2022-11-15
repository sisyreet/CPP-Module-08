#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class ICharacter;

class AMateria
{
protected:

	std::string	_type;

public:

	AMateria();	
	AMateria(std::string const & type);
	AMateria(AMateria const& src);
	// AMateria& operator=(AMateria const& src); useless
	virtual ~AMateria();

	std::string const&	getType() const; //Returns the materia type
	virtual AMateria*	clone() const = 0;
	virtual void		use(ICharacter& target);

};

#endif