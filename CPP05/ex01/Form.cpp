#include "Form.hpp"

Form::Form(const std::string name, const int gradeSign, const int gradeExecute) : Name(name), Signed(false), gradeToSign(gradeSign), gradeToExecute(gradeExecute) 
{
	this->checkRange();
}

Form::~Form()
{}

Form::Form(const Form& copy) : Name(copy.getName()), Signed(false), gradeToSign(copy.gradeNeedeedToSign()), gradeToExecute(copy.gradeNeedeedToExecute()) 
{}

Form& Form::operator=(const Form& copy)
{
	if (this != &copy)
		return (*this);
	return (*this);
}

const std::string Form::getName() const
{
	return(this->Name);
}

bool	Form::isSigned()
{
	return (this->Signed);
}

int	Form::gradeNeedeedToSign() const
{
	return (this->gradeToSign);
}

int	Form::gradeNeedeedToExecute() const
{
	return (this->gradeToExecute);
}

void	Form::beSigned(const Bureaucrat& bureaucrat, Form& form)
{ 
	if (bureaucrat.getGrade() > form.gradeNeedeedToSign())
		{
			std::cout << bureaucrat.getName() << " cannot sign " << form.getName() << "because he has too low grade" << std::endl;
			throw GradeTooLowException();
		}
	else
	{
		std::cout << bureaucrat.getName() << " signed " << form.getName() << std::endl;
		form.signer();
	}
}

void Form::signer()
{
	this->Signed = true;
}

std::ostream& operator<<(std::ostream &out, Form &f)
{
	out << f.getName() << " " << f.gradeNeedeedToSign() << " " << f.gradeNeedeedToSign();
	return out;
}

void	Form::checkRange()
{
	if (this->gradeNeedeedToExecute() > 150 || this->gradeNeedeedToSign() > 150)
		throw GradeTooLowException();
	else if (this->gradeNeedeedToExecute() < 1 || this->gradeNeedeedToSign() < 1)
		throw GradeTooHighException();
}
