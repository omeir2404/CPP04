#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <sstream>

# include <iostream>
# include <string>

class Brain
{
    protected:
        std::string ideas[100];
    public:
        Brain();
        Brain(const Brain &copy);
        ~Brain();
        Brain &operator=(const Brain &copy);

};

#endif