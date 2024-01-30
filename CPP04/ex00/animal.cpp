#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal constructor" << std::endl;
	this->type = "some random animal.";
}

Animal::~Animal(){
	std::cout << "Animal destructor" << std::endl;
}

Animal::Animal(const Animal& copy)
{
	std::cout << "Animal copy constructor" << std::endl;
	*this = copy;
}

Animal& Animal:: operator=(const Animal& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	std::cout << "Animal assignation operand" << std::endl;
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