#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal
{
    private:
        Brain *brain;

    public:
        Cat();
        Cat( Cat &copy);
        ~Cat();
        Cat &operator=(const Cat &copy);
        void makeSound() const;
        Brain *getBrain( void ) const;
};


#endif