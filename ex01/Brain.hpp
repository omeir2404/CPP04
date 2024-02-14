#ifndef BRAIN_HPP
# define BRAIN_HPP
#include <sstream>

# include <iostream>
# include <string>

class Brain
{
    private:
        std::string *ideas;
    public:
        Brain();
        Brain( Brain &copy);
        ~Brain();
        Brain &operator=(const Brain &copy);
        std::string *getIdeas();

};

#endif