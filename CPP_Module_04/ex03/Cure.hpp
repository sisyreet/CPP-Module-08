#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

#include <string>
#include <iostream>

class Cure : public AMateria
{
protected:

	std::string	_type;

public:

	Cure();	
	Cure(std::string const & type);
	Cure(Cure const& src);
	Cure& operator=(Cure const& src);
	virtual ~Cure();

	std::string const&	getType() const; //Returns the materia type
	Cure*				clone() const;
	virtual void		use(ICharacter& target);

};

#endif