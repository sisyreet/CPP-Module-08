#include "iter.hpp"

int	main()
{
	int intArray[] = {1,2,3,4};
	iter(intArray, sizeof(intArray)/sizeof(int), printElem);
	std::cout << std::endl;
	char charArray[] = {'f','u','c','k', ' ', 'o','f','f'};
	iter(charArray, sizeof(charArray)/sizeof(char), printElem);
}