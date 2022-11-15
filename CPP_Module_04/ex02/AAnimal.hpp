#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>

class	AAnimal
{
protected:

	std::string _type;

public:

	AAnimal();
	AAnimal(AAnimal const& src);
	AAnimal& operator=(AAnimal const& src);
	virtual ~AAnimal();

	virtual void makeSound() const = 0;	// Чистая виртуальная функция, теперь этот класс - абстрактный, 
										// нельзя создавать объекты этого класса, потому что функция не определена
										// Дочерние классы должны переопределять эту функцию
	std::string	getType() const;
};

#endif