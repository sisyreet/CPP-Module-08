#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	Weapon*	_weapon;
	std::string _name;
	
	public:

	HumanB();
	HumanB(std::string name);
	~HumanB();

	void	attack();
	void	setWeapon(Weapon& weaponType);
};

#endif