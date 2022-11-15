#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	Weapon *_weapon;
	std::string _name;

	public:

	HumanA();
	HumanA(std::string name, Weapon& weaponType);
	~HumanA();

	void		attack();
};

#endif