#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
    this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
    {
        std::stringstream ss;
        ss << i;
        this->ideas[i] = "think: ";
    }
}

Brain::Brain( Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	std::string *copy_ideas = copy.getIdeas();
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy_ideas[i] + " stolen";
}

Brain::~Brain()
{
	delete [] (this->ideas);
	std::cout << "Brain destructor called" << std::endl;
}

Brain &Brain::operator=( Brain const &copy)
{
	std::cout << "Brain assignation operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}

std::string *Brain::getIdeas()
{
	return (this->ideas);
}