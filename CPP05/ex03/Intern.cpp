#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern& copy)
{
	*this = copy;
}

Intern& Intern::operator=(Intern& copy)
{
	if (this != &copy)
		return (*this);
	return (*this);
}

Intern::~Intern(){}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string input[3] =
	{
		"robotomy request",
		"presidential pardon",
		"shrubbery creation"
	};

	AForm	*(*levels[3])(std::string) = 
	{
		&newPresidentialForm,

	};
}

PresidentialPardonForm* newPresidentialForm(std::string target)
{
	PresidentialPardonForm *z = new	PresidentialPardonForm(target);
	return (z);
}

RobotomyRequestForm* newRobotomyForm(std::string target)
{
	RobotomyRequestForm *z = new RobotomyRequestForm(target);
	return (z);
}

ShrubberyCreationForm* newShrubberyForm(std::string target)
{
	ShrubberyCreationForm *z = new ShrubberyCreationForm(target);
	return (z);
}