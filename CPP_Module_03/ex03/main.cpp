#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	// FragTrap Biba("Biba");
	// FragTrap Boba("Boba");

	DiamondTrap Biba("Biba");
	DiamondTrap Boba("Boba");
	std::cout << "====================================\n";
	std::cout << Biba.getAttackDamage() << ", " << Biba.getEnergyPoints() << ", " << Biba.getHitPoints() << std::endl;
	std::cout << "====================================\n";
	
	Boba.attack("Biba");
	Biba.attack("Boba");
	
	std::cout << std::endl;
	Biba.whoAmI();
	std::cout << std::endl;
}
