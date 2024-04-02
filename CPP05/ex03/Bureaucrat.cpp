#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

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

std::string Bureaucrat::getName() const
{
	return (this->name);
}

int Bureaucrat::getGrade() const
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

void		Bureaucrat::signForm(AForm& Form)
{
	if (Form.gradeNeedeedToSign() < this->grade)
		std::cout << "Cannot sign " << Form.getName() << " grade too low." << std::endl;
	else
		AForm::beSigned(*this, Form);
}

void	Bureaucrat::executeForm(AForm const &form)
{
	if (form.gradeNeedeedToExecute() < this->grade)
		std::cout << "Cannot execute " << form.getName() << " grade too low." << std::endl;
	else
		form.execute(*this);
}
