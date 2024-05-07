#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat constructor" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat& copy) : Animal()
{
	std::cout << "Cat  copy constructor" << std::endl;
	*this = copy;
}

Cat::~Cat(){
	std::cout << "Cat destructor" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	std::cout << "Cat assignation operand" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "miau" << std::endl;
}