#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	std::string _ideas[100];

public:

	Brain();
	Brain(Brain const& src);
	Brain& operator=(Brain const& src);
	~Brain();
};

#endif