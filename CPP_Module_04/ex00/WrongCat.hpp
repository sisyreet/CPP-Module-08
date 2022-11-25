#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{

public:

	WrongCat();
	WrongCat(WrongCat const& src);
	WrongCat& operator=(WrongCat const& src);
	virtual ~WrongCat();

	virtual void makeSound() const;
	std::string	getType() const;
};

#endif