#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N < 1)
		exit (0);
	
	Zombie *zombies = new Zombie[N];
	int		i = 0;

	while (i < N)
	{
		zombies[i].setName(name);
		i++;
	}
	return zombies;
}