#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap Biba("Biba");

	Biba.whoAmI();
	std::cout << Biba.getAttackDamage() << ", " << Biba.getEnergyPoints() << ", " << Biba.getHitPoints() << "\n";
	// DiamondTrap Boba("Boba");

	// Boba.attack("Biba");
	// Biba.takeDamage(Boba.getAttackDamage());
	// Biba.attack("Boba");
	// Boba.takeDamage(Biba.getAttackDamage());
	// Biba.beRepaired(2);
	// Boba.beRepaired(3);
	
	// std::cout << std::endl;
	// Biba.highFivesGuys();
	// std::cout << std::endl;
}