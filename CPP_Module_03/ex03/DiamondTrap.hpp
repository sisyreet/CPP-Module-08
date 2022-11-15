#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

//#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap // do i need virtual?
{
	std::string _name;
	
	public:

	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const& src);
	DiamondTrap& operator=(DiamondTrap const& src);
	~DiamondTrap();

	void	attack(std::string name);
	void	whoAmI();
};

#endif