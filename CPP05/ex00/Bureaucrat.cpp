#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
	Bureaucrat::setGrade(grade);
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	*this = copy;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	if (this != &copy)
	{
		return (*this);
	}
	return (*this);
}

std::string Bureaucrat::getName()
{
	return (this->name);
}

int Bureaucrat::getGrade()
{
	return (this->grade);
}

void	Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		this->grade = grade;
}

std::ostream& operator<<(std::ostream &out, Bureaucrat &f)
{
	out << f.getName() << ", bureaucrat grade " << f.getGrade();
	return (out);
}