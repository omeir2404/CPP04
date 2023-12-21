#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>


int main()
{
    const Animal* meta = new Animal();
    const Dog* Dog_obj = new Dog();
    const Cat* Cat_obj = new Cat();
    std::cout << std::endl;
    std::cout << "meta->getType(): " << meta->getType() << std::endl;
    std::cout << "Dog_obj->getType(): " << Dog_obj->getType() << std::endl;
    std::cout << "Cat_obj->getType(): " << Cat_obj->getType() << std::endl;
    std::cout << std::endl;
    Cat_obj->makeSound(); //will output the cat sound!
    Dog_obj->makeSound();
    meta->makeSound();
    std::cout << std::endl;
    delete meta;
    delete Dog_obj;
    delete Cat_obj;
    return 0;
}