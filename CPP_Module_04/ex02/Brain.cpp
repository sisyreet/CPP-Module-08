#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called!\n";
}

Brain::Brain(Brain const& src)
{
	*this = src;
}

Brain& Brain::operator=(Brain const & src)
{
	if (this == &src)
		return (*this);
	for (size_t i = 0; i < this->_ideas->size(); i++)
		this->_ideas[i] = src._ideas[i];
	return (*this);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called!\n";
}
