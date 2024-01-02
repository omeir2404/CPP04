#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}

Cat &Cat::operator=(const Cat &copy)
{
    std::cout << "Cat assignation operator called" << std::endl;
    this->type = copy.type;
    *this->brain = *copy.brain;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
}
