#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Dog constructor" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog& copy)
{
	std::cout << "Dog copy constructor" << std::endl;
	*this = copy;
}

Dog::~Dog(){
	std::cout << "Dog destructor" << std::endl;
}

Dog& Dog::operator=(const Dog& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	std::cout << "Dog assignation operand" << std::endl;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "guau" << std::endl;
}