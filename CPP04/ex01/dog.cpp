#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain;
}

Dog::Dog(const Dog& copy) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = copy.type;
		if (brain)
			delete brain;
		brain = new Brain(*copy.brain);
	*this = copy;
}

Dog::~Dog(){
	delete this->brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		if (brain)
			delete brain;
		brain = new Brain(*copy.brain);
	}
	std::cout << "Dog assignation operand called" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "guau" << std::endl;
}