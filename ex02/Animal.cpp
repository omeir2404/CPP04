#include "Animal.hpp"

Animal::Animal()
{
}


Animal::Animal(const Animal &copy)
{
    *this = copy;
}

Animal::~Animal()
{
    
}

Animal &Animal::operator=(const Animal &copy)
{
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

std::string Animal::getType() const
{
    return (this->type);
}


// void Animal::makeSound() const
// {
//     std::cout << "Animal sound" << std::endl;
// }
