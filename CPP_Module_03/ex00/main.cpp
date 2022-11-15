#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap noob("noob");
	// ClapTrap pro("pro");
	ClapTrap pro("pro", 3, 6, 6);
	// ClapTrap noname(pro);
	// ClapTrap noname2;
	// noname2 = noname;

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

}