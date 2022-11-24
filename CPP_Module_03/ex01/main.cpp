#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap Biba("Biba");
	ScavTrap Boba("Boba");

	Boba.attack("Biba");
	Biba.takeDamage(Boba.getAttackDamage());
	Biba.attack("Boba");
	Boba.takeDamage(Biba.getAttackDamage());
	Biba.beRepaired(2);
	Boba.beRepaired(3);
	
	std::cout << std::endl;
	Biba.guardGate();
	std::cout << std::endl;
}