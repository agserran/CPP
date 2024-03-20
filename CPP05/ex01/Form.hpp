#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class  Form
{
    private:
        const std::string   Name;
        bool                Signed;
        const int           gradeToSign;
        const int           gradeToExecute;
    public:
		Form(const std::string name, const int gradeSign, const int gradexecute);
		~Form();
		Form(const Form& copy);
		Form& operator=(const Form& copy);
        class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw ()
				{
					return ("Grade Too Low Exception. No valid grade ");
				}
		};

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw ()
				{
					return ("Grade Too High Exception. No valid grade ");
				}
		};
        const std::string			getName() const;
        bool						isSigned();
		int							gradeNeedeedToSign() const;
		int							gradeNeedeedToExecute() const;
		static void					beSigned(const Bureaucrat& Bureaucrat, Form& form);
		void						signer();
		void						checkRange();
};

std::ostream& operator<<(std::ostream &out, Form &f);
#endif