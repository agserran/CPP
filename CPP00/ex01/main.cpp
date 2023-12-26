#include "phonebook.hpp"

std::string	toMayus(std::string str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		str[i] = toupper(str[i]);
	}
	return (str);
}

int main(void) {
    phoneBook agenda;
    std::string tmp;
    
    while (1) {
        std::cout << "CHOOSE AN OPTION: ADD SEARCH EXIT" << std::endl;
        if (!(std::cin >> tmp)) {
            if (std::cin.eof()) {
                std::cout << "EOF reached. Exiting..." << std::endl;
                break; 
            }
            else {
                std::cerr << "Error de entrada." << std::endl;
                break; 
            }
        }
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        tmp = toMayus(tmp);

        if (tmp == "ADD") {
            agenda.addContact();
        }
        else if (tmp == "SEARCH") {
            agenda.searchContact();
        }
        else if (tmp == "EXIT") {
            std::cout << "Exiting..." << std::endl;
            break; 
        }
        else {
            std::cout << "NON VALID OPTION" << std::endl;
        }
    }

    return 0;
}
