#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:

	// AMateria*	_inventory[4];
	std::string	_name;
	AMateria	*m_inventory[4];

public:

	Character();
	Character(std::string name);
	Character(Character const& src);
	Character& operator=(Character const& src);
	virtual ~Character();

	virtual std::string const&	getName() const;
	virtual void				equip(AMateria* m);
	virtual void				unequip(int idx);
	virtual void				use(int idx, ICharacter& target);
};

#endif