#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "Wrong Cat constructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& copy) : WrongAnimal()
{
	std::cout << "Wrong Cat copy constructor" << std::endl;
	*this = copy;
}

WrongCat::~WrongCat(){
	std::cout << "Wrong Cat destructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& copy)
{
	if (this != &copy)
	{
		this->type = copy.type;
	}
	std::cout << "Wrong Cat assignation operand" << std::endl;
	return (*this);
}