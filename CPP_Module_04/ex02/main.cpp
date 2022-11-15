#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main()
{
	//AAnimal animal; // cannot be created
	
	Cat *kitten = new Cat();
	Dog *puppy = new Dog();
	if (!kitten || !puppy)
		return (1);
	kitten->makeSound();
	puppy->makeSound();

	delete kitten;
	delete puppy;

	return 0;
}