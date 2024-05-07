#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain;
}

Cat::Cat(const Cat& copy) : Animal()
{
	std::cout << "Cat copy called" << std::endl;
	this->type = copy.type;
		if (this->brain)
			delete this->brain;
		brain = new Brain(*copy.brain);
	*this = copy;
}

Cat::~Cat(){
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
		if (this->brain)
			delete this->brain;
		brain = new Brain(*copy.brain);
	}
	std::cout << "Cat assignation operand called" << std::endl;
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "miau" << std::endl;
}

void Cat::setBrainNumIdeas()
{
	this->brain->setNumIdeas();
}

void Cat::setBrainStringIdeas()
{
	this->brain->setStringIdeas();
}

void Cat::printBrainIdeas()
{
	this->brain->printIdeas();
}