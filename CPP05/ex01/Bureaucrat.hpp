#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string		name;
		int				grade; 
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& copy);
		Bureaucrat& operator=(const Bureaucrat& copy);
		std::string				getName() const;
		int						getGrade() const;
		void					setGrade(int grade);
		void					signForm(Form& Form);	
		
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
};

std::ostream& operator<<(std::ostream &out, Bureaucrat &f);

#endif