#include "Dog.hpp"

Dog::Dog(){
	this->type = "Dog";
}

Dog::Dog(const Dog& copy)
{
	*this = copy;
}

Dog::~Dog(){}

Dog& Dog::operator=(const Dog& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "guau" << std::endl;
}