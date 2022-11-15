#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>
#include <iostream>

class Ice : public AMateria
{
protected:

	std::string	_type;

public:

	Ice();	
	Ice(std::string const & type);
	Ice(Ice const& src);
	Ice& operator=(Ice const& src);
	virtual ~Ice();

	std::string const&	getType() const; //Returns the materia type
	Ice*				clone() const;
	virtual void		use(ICharacter& target);

};

#endif