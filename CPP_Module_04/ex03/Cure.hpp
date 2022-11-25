#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

#include <string>
#include <iostream>

class Cure : public AMateria
{
public:

	Cure();	
	Cure(std::string const & type);
	Cure(Cure const& src);
	Cure& operator=(Cure const& src);
	virtual ~Cure();

	virtual AMateria	*clone() const;
	virtual void		use(ICharacter& target);

};

#endif