#include "Harl.hpp"

int	main(int argc, char **argv)
{
	Harl harl;

	if (argc < 2)
	{
		std::cout << "Usage: ./Harl [DEBUG] or [INFO] or [WARNING] or [ERROR]\n";
		return (1);
	}
	harl.complain(argv[1]);
	return 0;
}