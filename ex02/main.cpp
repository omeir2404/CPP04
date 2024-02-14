#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
	// const Animal *i = new Animal();
	const Animal *j = new Dog();
	// Animal test;
	delete j;
	Dog basic;
	{
		Dog temp = basic;
	}
	
	return 0;
}