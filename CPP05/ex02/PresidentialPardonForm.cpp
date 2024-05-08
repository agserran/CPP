#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("Presidential Pardon Form", 25, 5), target("default")
{}

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : AForm("Presidential Pardon Form", 25, 5), target(Target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm("Presidential Pardon Form", 25, 5), target(copy.target)
{
    *this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& copy)
{
	if (this != &copy)
		return(*this);
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->isSigned() == true)
		std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
		std::cout << "Presidential Pardon Form is not signed." << std::endl;
}