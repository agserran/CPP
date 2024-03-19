#include "Form.hpp"

Form::Form(const std::string name, bool Signed, const int gradeSign, const int gradeExecute) : Name(name), Signed(Signed), gradeToSign(gradeSign), gradeToExecute(gradeExecute) 
{}

Form::~Form()
{}

Form::Form(const Form& copy)
{
	*this = copy;
}

Form& Form::operator=(const Form& copy)
{
	if (this != &copy)
		return (*this);
	return (*this);
}

const std::string Form::getName()
{
	return(this->Name);
}

bool	Form::isSigned()
{
	return (this->Signed);
}

const int	Form::gradeNeedeedToSign()
{
	return (this->gradeToSign);
}

const int	Form::gradeNeedeedToExecute()
{
	return (this->gradeToExecute);
}

void	Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->gradeNeedeedToSign())
		{
			std::cout << bureaucrat.getName() << " cannot sign " << this->getName() << "because he has too low grade" << std::endl;
			throw GradeTooLowException();
		}
	else
	{
		std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl;
		this->Signed = true;
}

std::ostream& operator<<(std::ostream &out, Bureaucrat &f)
{
	out << f->Name
}