#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& copy);
	Animal& operator=(const Animal& copy);
	virtual void	makeSound() const;
	const std::string getType() const;
};

#endif