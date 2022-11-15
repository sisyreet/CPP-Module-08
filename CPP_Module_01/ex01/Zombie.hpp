#include <iostream>
#include <string>


class Zombie
{
	std::string _name;

	public:

	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	announce(void);
	Zombie*	newZombie(std::string name);
	void	setName(std::string);
};

Zombie* zombieHorde(int N, std::string name);