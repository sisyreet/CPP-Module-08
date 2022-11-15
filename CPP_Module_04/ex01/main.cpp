#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	const Animal*	zoo[100];

	delete j;//should not create a leak
	delete i;

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
			zoo[i] = new Cat("#" + std::to_string(i + 1));
		else
			zoo[i] = new Dog("#" + std::to_string(i + 1));
	}
	
	for (int i = 0; i < 100; i++)
	{
		std::cout << zoo[i]->getType() << " says ";
		zoo[i]->makeSound();
	}

	for (int i = 0; i < 100; i++)
		delete zoo[i];

	return 0;
}