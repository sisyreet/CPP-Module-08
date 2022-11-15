#include "Zombie.hpp"

int main(void)
{
	int		N = 3;
	int		i = 0;
	Zombie* theHorde = zombieHorde(N, "zombozie");

	while (i < N)
	{
		theHorde[i].announce();
		i++;
	}
	delete[] theHorde;
	return 0;
}