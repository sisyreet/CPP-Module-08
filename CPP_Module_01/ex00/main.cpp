#include "Zombie.hpp"

int	main(void)
{
	Zombie Biba("Biba");
	Biba.announce();
	Zombie *Boba = NULL;
	Boba = Boba->newZombie("Boba");
	Boba->announce();
	randomChump("Buba");
	delete(Boba);
	return 0;
}