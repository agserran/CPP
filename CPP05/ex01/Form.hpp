#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class  Form
{
    private:
        const std::string   Name;
        bool                Signed;
        const int           gradeToSign;
        const int           gradeToExecute;
    public:
		Form(const std::string name, bool Signed, const int gradeSign, const int gradexecute);
		~Form();
		Form(const Form& copy);
		Form& operator=(const Form& copy);
        class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw ()
				{
					return ("Grade Too Low Exception.");
				}
		};

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw ()
				{
					return ("Grade Too High Exception.");
				}
		};
        const std::string			getName();
        bool						isSigned();
		const int					gradeNeedeedToSign();
		const int					gradeNeedeedToExecute();
		void						beSigned(const Bureaucrat& Bureaucrat);
};

std::ostream& operator<<(std::ostream &out, Form &f);
#endif