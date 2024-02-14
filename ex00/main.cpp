#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main()
{
    const Animal* meta = new Animal();
    const Animal* Dog_obj = new Dog();
    const Animal* Cat_obj = new Cat();

    std::cout << std::endl;
    std::cout << "meta->getType(): " << meta->getType() << std::endl;
    std::cout << "Dog_obj->getType(): " << Dog_obj->getType() << " " << std::endl;
    std::cout << "Cat_obj->getType(): " << Cat_obj->getType() << " " << std::endl;
    std::cout << std::endl;
    
    Cat_obj->makeSound();
    Dog_obj->makeSound();
    meta->makeSound();
    
    std::cout << std::endl;
    
    delete meta;
    delete Dog_obj;
    delete Cat_obj;

    const WrongAnimal* WrongAnimal_obj = new WrongAnimal();
    const WrongAnimal* WrongCat_obj = new WrongCat();

    std::cout << std::endl;
    std::cout << "WrongAnimal_obj->getType(): " << WrongAnimal_obj->getType() << std::endl;
    std::cout << "WrongCat_obj->getType(): " << WrongCat_obj->getType() << " " << std::endl;
    std::cout << std::endl;

    WrongAnimal_obj->makeSound();
    WrongCat_obj->makeSound();

    std::cout << std::endl;

    delete WrongAnimal_obj;
    delete WrongCat_obj;

    return 0;
}