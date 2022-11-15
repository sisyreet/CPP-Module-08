#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal
{
	Brain* _brain;

public:

	Cat();
	Cat(std::string name);
	Cat(Cat const& src);
	Cat& operator=(Cat const& src);
	~Cat();

	virtual void makeSound() const;
	std::string	getType() const;
};

#endif