#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	std::cout << "\n~~~~~~~~~~~~~~ MY TESTS ~~~~~~~~~~~~~~\n\n";
	Weapon glock = Weapon("glock");
	HumanA biba("biba", glock);
	HumanB boba("boba");

	boba.attack(); //attack with no gun
	biba.attack();
	boba.setWeapon(glock);
	glock.setType("grenade launcher");
	boba.attack();

return 0;
}