#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	virtual ~Animal();
	Animal(const Animal& copy);
	Animal& operator=(const Animal& copy);
	virtual void	makeSound() const = 0;
	const std::string getType() const;
};

#endif