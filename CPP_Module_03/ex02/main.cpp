#include "FragTrap.hpp"

int	main(void)
{
	FragTrap Biba("Biba");
	FragTrap Boba("Boba");

	Boba.attack("Biba");
	Biba.takeDamage(Boba.getAttackDamage());
	Biba.attack("Boba");
	Boba.takeDamage(Biba.getAttackDamage());
	Biba.beRepaired(2);
	Boba.beRepaired(3);
	
	std::cout << std::endl;
	Biba.highFivesGuys();
	std::cout << std::endl;
}
