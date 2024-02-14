#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
        std::string	type;
    public:
        Dog();
        Dog( Dog &copy);
        ~Dog();
        Dog &operator=(const Dog &copy);
        void makeSound() const;
        Brain *getBrain() const;
        std::string getType( void ) const;
};
#endif