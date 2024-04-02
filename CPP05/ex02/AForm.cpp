#include "AForm.hpp"

AForm::AForm(const std::string name, const int gradeSign, const int gradeExecute) : Name(name), Signed(false), gradeToSign(gradeSign), gradeToExecute(gradeExecute) 
{
	this->checkRange();
}

AForm::~AForm()
{}

AForm::AForm(const AForm& copy) : Name(copy.getName()), Signed(false), gradeToSign(copy.gradeNeedeedToSign()), gradeToExecute(copy.gradeNeedeedToExecute()) 
{}

AForm& AForm::operator=(const AForm& copy)
{
	if (this != &copy)
		return (*this);
	return (*this);
}

const std::string AForm::getName() const
{
	return(this->Name);
}

bool	AForm::isSigned() const
{
	return (this->Signed);
}

int	AForm::gradeNeedeedToSign() const
{
	return (this->gradeToSign);
}

int	AForm::gradeNeedeedToExecute() const
{
	return (this->gradeToExecute);
}

void	AForm::beSigned(const Bureaucrat& bureaucrat, AForm& form)
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

void AForm::signer()
{
	this->Signed = true;
}

std::ostream& operator<<(std::ostream &out, AForm &f)
{
	out << f.getName() << " " << f.gradeNeedeedToSign() << " " << f.gradeNeedeedToSign();
	return out;
}

void	AForm::checkRange()
{
	if (this->gradeNeedeedToExecute() > 150 || this->gradeNeedeedToSign() > 150)
		throw GradeTooLowException();
	else if (this->gradeNeedeedToExecute() < 1 || this->gradeNeedeedToSign() < 1)
		throw GradeTooHighException();
}
