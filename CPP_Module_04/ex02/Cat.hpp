#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class	Cat : public AAnimal
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