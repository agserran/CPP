#include "Cat.hpp"

Cat::Cat(){
	this->type = "Cat";
}

Cat::Cat(const Cat& copy)
{
	*this = copy;
}

Cat::~Cat(){}

Cat& Cat::operator=(const Cat& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	return (*this);
}

void	makeSound()
{
	std::cout << "miau" << std::endl;
}