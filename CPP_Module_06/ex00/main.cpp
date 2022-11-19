#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "\n\033[1;31mUsage ./convert 0\033[0m\n\n";
		return 1;
	}
	Convert a(argv[1]);
	Convert c;


	
	c.printValue();
	std::cout << "-----------------------------\n";
	a.printValue();
	return 0;
}