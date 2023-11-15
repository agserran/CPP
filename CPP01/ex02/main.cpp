#include <iostream>

int	main()
{
	std::string	cadena = "HI THIS IS BRAIN.";
	std::string *stringPTR = &cadena;
	std::string	&stringREF = cadena;

	  
    std::cout << "Dirección de memoria de la variable 'cadena': " << &cadena << std::endl;

    std::cout << "Dirección de memoria contenida en 'stringPTR': " << stringPTR << std::endl;

    std::cout << "Dirección de memoria contenida en 'stringREF': " << &stringREF << std::endl;

    std::cout << "Valor de 'cadena': " << cadena << std::endl;

    std::cout << "Valor apuntado por 'stringPTR': " << *stringPTR << std::endl;

    std::cout << "Valor apuntado por 'stringREF': " << stringREF << std::endl;
}