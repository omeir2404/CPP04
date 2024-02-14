#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;

    public:
        Dog();
        Dog( Dog &copy);
        ~Dog();
        Dog &operator=(const Dog &copy);
        void makeSound() const;
        Brain *getBrain() const;
};
#endif