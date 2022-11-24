#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	std::string _name;
	
public:

	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const& src);
	DiamondTrap& operator=(DiamondTrap const& src);
	virtual ~DiamondTrap();

	using	ScavTrap::attack;
	void	whoAmI();
};

#endif