#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <string>
#include <iostream>

struct Data
{
	// std::string value1;
	// std::string value2;
	// int			into;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif