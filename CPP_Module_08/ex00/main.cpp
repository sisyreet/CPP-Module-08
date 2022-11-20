#include "easyfind.hpp"

int	main()
{
	std::vector<int> intArray;
	
	for (int i = 0; i < 100; i++)
		intArray.push_back(i * 2);

	std::cout << easyfind(intArray, 111) << std::endl;	// -1
	std::cout << easyfind(intArray, 172) << std::endl;	// 172

	return 0;
}