#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const& src);
	ScavTrap& operator=(ScavTrap const& src);
	~ScavTrap();

	void guardGate();
};

#endif