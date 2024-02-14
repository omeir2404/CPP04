#include "Cat.hpp"

Cat::Cat() : Animal()
{
    std::cout << "Cat default constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat( Cat &copy) : Animal(copy)
{
    std::cout << "Cat copy constructor called" << std::endl;
    this->type = copy.getType();
    this->brain = new Brain(*(copy.getBrain()));

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
    if (this->brain)
        delete (this->brain);
    this->brain = new Brain(*(copy.getBrain()));
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
}

Brain *Cat::getBrain( void ) const
{
	return (this->brain);
}

std::string Cat::getType( void ) const
{
	return (this->type);
}