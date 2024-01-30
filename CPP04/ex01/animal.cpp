#include "Animal.hpp"

Animal::Animal(){
	this->type = "some random animal.";
}

Animal::~Animal(){}

Animal::Animal(const Animal& copy)
{
	*this = copy;
}

Animal& Animal:: operator=(const Animal& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

void Animal::makeSound() const
{
	std::cout << "some random animal soud." << std::endl;
}

const std::string Animal::getType() const
{
	return (this->type);
}