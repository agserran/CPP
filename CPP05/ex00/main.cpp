#include "Bureaucrat.hpp"


int	main()
{
	try 
	{
		Bureaucrat z("juan", 200);
		std::cout << z << std::endl;
	}

	catch (Bureaucrat::GradeTooLowException &e)
	{
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat x("Pepe", 0);
		std::cout << x << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	try
	{
		Bureaucrat x("Pepe", 1);
		std::cout << x << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << "Caught an exception: " << e.what() << std::endl;
	}
	return 0;
}