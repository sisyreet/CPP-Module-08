#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{

protected:

	std::string	_name;
	int	_attackDamage;
	int	_energyPoints;
	int	_hitPoints;

public:

	ClapTrap();
	ClapTrap(ClapTrap const& src);
	ClapTrap& operator=(ClapTrap const& src);
	~ClapTrap();

	ClapTrap(std::string name);

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

	int			getAttackDamage(void) const;
	void		setAttackDamage(int amount);
	int			getEnergyPoints(void) const;
	void		setEnergyPoints(int amount);
	int			getHitPoints(void) const;
	void		setHitPoints(int amount);
	std::string getName(void) const;
};

#endif