#include <iostream>
#include <string>

void	randomChump(std::string name);

class Zombie
{

private:

	std::string _name;

public:
	
	Zombie(std::string name);
	~Zombie();

	void	announce(void);
	Zombie*	newZombie(std::string name);

};