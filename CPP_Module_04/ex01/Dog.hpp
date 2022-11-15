#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Dog : public Animal
{
	Brain* _brain;

public:

	Dog();
	Dog(std::string name);
	Dog(Dog const& src);
	Dog& operator=(Dog const& src);
	~Dog();

	virtual void makeSound() const;
	std::string	getType() const;
};

#endif