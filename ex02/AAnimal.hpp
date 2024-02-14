#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>
#include <string>
class Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal &copy);
		virtual ~Animal();
		Animal &operator=(const Animal &copy);
		virtual void makeSound() const = 0;
		virtual std::string getType() const;
};

#endif