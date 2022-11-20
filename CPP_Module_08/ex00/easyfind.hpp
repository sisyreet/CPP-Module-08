#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm> 
#include <vector>

template<typename T>
int	easyfind(T first, int second)
{
	std::vector<int>::iterator it;
	
	it = std::find(first.begin(), first.end(), second);
	if (it != first.end())
		return *it;
	else
		return -1;
}

#endif