#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}

void	Harl::info(void)
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money.\n"
		<< "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free.\n"
		<< "I've been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now.\n";
}

void Harl::somethingElse(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}

void Harl::complain(std::string level)
{
	int	i = 0;
	void (Harl::*f[5])(void) = {&Harl::debug, 
								&Harl::info, 
								&Harl::warning, 
								&Harl::error, 
								&Harl::somethingElse};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	while (level.compare(levels[i]) && i < 4)
		i++;
	switch (i + 1)
	{
	case 1:
		(this->*f[i])();
		break;
	case 2:
		(this->*f[i])();
		break;
	case 3:
		(this->*f[i])();
		break;
	case 4:
		(this->*f[i])();
		break;
	default:
		(this->*f[i])();
		break;
	}
}
