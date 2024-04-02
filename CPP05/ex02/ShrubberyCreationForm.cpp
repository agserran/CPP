#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) : AForm("ShrubberyCreationForm", 25, 5), target(Target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm("ShrubberyCreationForm", 25, 5), target(copy.target)
{
    *this = copy;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	if (this != &copy)
		return(*this);
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (this->isSigned() == true)
	{
		std::string		fileName = executor.getName() + "_shrubbery";
		std::ofstream file(fileName);

    	if (file.is_open()) {
      	  file << "    _\\/_" << std::endl;
		  file << "  _/    \\_" << std::endl;
		  file << " /        \\" << std::endl;
		  file << " \\        /" << std::endl;
		  file << "  \\______/" << std::endl;
		  file << "    || ||" << std::endl;
		  file << "    || ||" << std::endl;
		  file << "    || ||" << std::endl;
		  file.close();
		  std::cout << "Ascii tree created" << std::endl;
    } 
	else
        std::cerr << "Cannot open file" << std::endl;
	}
	else
		std::cout << "ShrubberyCreationForm is not signed." << std::endl;
}