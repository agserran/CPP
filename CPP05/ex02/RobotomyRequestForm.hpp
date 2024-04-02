#pragma once

#include "AForm.hpp"
#include <random>

class RobotomyRequestForm : public AForm
{
	private:
		std::string		target;
	public:
		RobotomyRequestForm(std::string Target);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &copy);
		~RobotomyRequestForm();
		virtual void	execute(Bureaucrat const &executor) const;
};