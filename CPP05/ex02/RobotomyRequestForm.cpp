#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Robotomy Request Form.", 72, 45), target("default")
{}

RobotomyRequestForm::RobotomyRequestForm(std::string Target) : AForm("Robotomy Request Form.", 72, 45), target(Target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : AForm("Robotomy Request Form.", 72, 45), target(copy.target)
{
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	if (this != &copy)
		return *this;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->isSigned() == true){
		std::random_device rd;
    	std::mt19937 gen(rd());
    	std::uniform_int_distribution<int> distribution(1, 100);

    
    	int random_number = distribution(gen);

	
    	if (random_number % 2 == 0)
			std::cout << executor.getName() << " has been robotomized."<< std::endl;
		else
        	std::cerr << "Robotomy failed." << std::endl;
}
	else
		std::cout << "Robotomy Request Form is not signed." << std::endl;
}