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
	if ()
}
