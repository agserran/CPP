#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal constructor" << std::endl;
	this->type = "some wrong random animal.";
}

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal destructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& copy)
{
	std::cout << "WrongAnimal copy constructor" << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal:: operator=(const WrongAnimal& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	std::cout << "WrongAnimal assignation operand" << std::endl;
	return (*this);
}

void WrongAnimal::makeSound() const
{
	std::cout << "some wrong random animal soud." << std::endl;
}

const std::string WrongAnimal::getType() const 
{
	return (this->type);
}