#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class  AForm
{
    private:
        const std::string   Name;
        bool                Signed;
        const int           gradeToSign;
        const int           gradeToExecute;
    public:
		AForm();
		AForm(const std::string name, const int gradeSign, const int gradexecute);
		virtual ~AForm();
		AForm(const AForm& copy);
		AForm& operator=(const AForm& copy);
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
        bool						isSigned() const;
		int							gradeNeedeedToSign() const;
		int							gradeNeedeedToExecute() const;
		static void					beSigned(const Bureaucrat& Bureaucrat, AForm& form);
		void						signer();
		void						checkRange();
		virtual void				execute(Bureaucrat const &executor)const = 0;
};

std::ostream& operator<<(std::ostream &out, AForm &f);
#endif