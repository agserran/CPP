#pragma once

#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern{
	public:
		Intern();
		Intern(Intern& copy);
		Intern& operator=(Intern& copy);
		~Intern();
		AForm *makeForm(std::string name, std::string target);
};

PresidentialPardonForm* newPresidentialForm(std::string target);
RobotomyRequestForm* newRobotomyForm(std::string target);
ShrubberyCreationForm* newShrubberyForm(std::string target);