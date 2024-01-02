#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{

	// Animal *j = new Animal();// should not be possible
	// delete j;
	const Dog *d = new Dog();
	(void)d;
	delete d;
	const Dog* Dogs[5] = {new Dog(), new Dog(), new Dog(), new Dog(), new Dog()};
	for (int i = 0; i < 5; i++)
	    delete Dogs[i];
	const Cat* Cats[5] = {new Cat(), new Cat(), new Cat(), new Cat(), new Cat()};
	for (int i = 0; i < 5; i++)
	    delete Cats[i];
	return 0;
}