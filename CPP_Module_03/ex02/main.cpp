#include "FragTrap.hpp"
#include "ScavTrap.hpp"

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
	
	ClapTrap noob("noob");
	ScavTrap pro("pro");

	for (int i = 6; i > 0; i--)
	{
		noob.attack("pro");
		if (noob.getHitPoints() > 0 && noob.getEnergyPoints() > 0)
			pro.takeDamage(noob.getAttackDamage());
		pro.attack("noob");
		if (pro.getHitPoints() > 0 && pro.getEnergyPoints() > 0)
			noob.takeDamage(pro.getAttackDamage());
		noob.beRepaired(1);
		pro.beRepaired(1);
	}
	
	std::cout << std::endl;
	Biba.highFivesGuys();
	std::cout << std::endl;
}
