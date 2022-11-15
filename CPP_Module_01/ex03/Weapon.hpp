#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	std::string _type;

	public:

	Weapon();
	Weapon(std::string const type);
	~Weapon();

	std::string	const &getType();
	void	setType(std::string type);
};

#endif