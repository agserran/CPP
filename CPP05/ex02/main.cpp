#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
	std::cout << "Creating Bureaucrats" << std::endl;
	Bureaucrat bur1("Presi",	1);
	Bureaucrat bur2("Robot",	45);
	Bureaucrat bur3("Forest",	1);

	std::cout << std::endl << "Creating Forms" << std::endl;
	PresidentialPardonForm	presi("may I beg your pardon");
	RobotomyRequestForm		robotomy("bip bop bup");
	ShrubberyCreationForm	forest("create trees");

	//* Presi will execute PresidentialPardonForm
	try
	{
		bur1.signForm(presi);
		bur1.executeForm(presi);
		std::cout << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	//* Robot will execute RobotomyRequstForm
	try
	{
		bur2.signForm(robotomy);
		bur2.executeForm(robotomy);
		std::cout << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	//* Forest will execute ShrubberyCreationForm
	try
	{
		bur3.signForm(forest);
		bur3.executeForm(forest);
		std::cout << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}