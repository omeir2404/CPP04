#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	delete j;//should not create a leak
	delete i;


	const Dog *d = new Dog();
	(void)d;
	delete d;
	const Animal* Animals[10] = {new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat(), new Dog(), new Cat()};
	for (int i = 0; i < 10; i++)
	    delete Animals[i];
	return 0;
}