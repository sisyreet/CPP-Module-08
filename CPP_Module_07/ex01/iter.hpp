#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T * array, int length, void(*f)(T & elem))
{
	for (int i = 0; i < length; i++)
		f(array[i]);
}

template <typename T>
void	printElem(T elem)
{
	std::cout << "Element value is: " << elem << std::endl;
}

#endif