#include "Zombie.hpp"

int main(void)
{
	int		N = -13;
	Zombie* theHorde = zombieHorde(N, "zombozie");

	for (int i = 0; i < N; i++)
		theHorde[i].announce();

	delete[] theHorde;
	return 0;
}