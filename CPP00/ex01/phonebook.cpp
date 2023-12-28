#include "phonebook.hpp"

phoneBook::phoneBook(){this->index = 0;}

phoneBook::~phoneBook(){};

void phoneBook::addContact()
{
    std::string tmp;
    std::cout << "ENTER THE NAME." << std::endl;
    if (std::getline(std::cin, tmp)) {
        contactos[index % 8].setName(tmp);
    } else {
        std::cout << "Invalid input or EOF reached." << std::endl;
        return;
    }

    std::cout << "ENTER THE LASTNAME." << std::endl;
    if (std::getline(std::cin, tmp)) {
        contactos[index % 8].setLastName(tmp);
    } else {
        std::cout << "Invalid input or EOF reached." << std::endl;
        return;
    }

    std::cout << "ENTER THE NICKNAME." << std::endl;
    if (std::getline(std::cin, tmp)) {
        contactos[index % 8].setNickName(tmp);
    } else {
        std::cout << "Invalid input or EOF reached." << std::endl;
        return;
    }

    std::cout << "ENTER THE PHONE NUMBER." << std::endl;
    if (std::getline(std::cin, tmp)) {
        while (!contieneSoloNumeros(tmp)) {
            std::cout << "Invalid phone number. Please enter a valid number." << std::endl;
            if (!(std::getline(std::cin, tmp))) {
                std::cout << "Invalid input or EOF reached." << std::endl;
                return;
            }
        }
        contactos[index % 8].setPhoneNumber(tmp);
    } else {
        std::cout << "Invalid input or EOF reached." << std::endl;
        return;
    }

    std::cout << "ENTER THE DARKEST SECRET." << std::endl;
    if (std::cin >> tmp) {
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        contactos[index % 8].setDarkestsecret(tmp);
    } else {
        std::cout << "Invalid input or EOF reached." << std::endl;
        return;
    }

    index++;
}


bool phoneBook::contieneSoloNumeros(const std::string str)
{
    for (int i = 0;str[i]; i++) {
        if (!isdigit(str[i])) {
            return false;
        }
    }
    return true;
}

void	phoneBook::printContact(int i)
{
	while (i < 0 || i > this->index)
	{
		std::cout << "NON VALID INDEX." << std::endl;
		std::cin >> i;
	}
	std::cout << "INDEX: " << std::to_string(i) << std::endl;
	std::cout << "FIRST NAME: " << contactos[i].getName() << std::endl;
	std::cout << "LAST NAME: " << contactos[i].getLastName() << std::endl;
	std::cout << "NICKNAME: " << contactos[i].getNickName() << std::endl;
	std::cout << "PHONE NUMBER: " << contactos[i].getPhoneNumber() << std::endl;
	std::cout << "DARKEST SECRET: " << contactos[i].getDarkestsecret() << std::endl;
}

void	printHeader()
{
	std::cout << "**INDEX** |FIRSTNAME|*LAST NAME|*NICKNAME |" << std::endl;
}


void	printSpaces(int i)
{
	while (i)
	{
		std::cout << " ";
		i--;
	}
}

void	printer(std::string str)
{
	int len;

	len = str.length();
	if (len > 10){
		std::cout << str.substr(0, 8);
        std::cout << ".";
}
	if (len < 10){
		printSpaces(10 - len);
	    std::cout << str;
}
}

void	phoneBook::printContacts()
{
	for (int i = 0; i < this->index && i < 8; i++)
	{
		printer(std::to_string(i));
        std::cout << "|";
		printer(contactos[i].getName());
        std::cout << "|";
		printer(contactos[i].getLastName());
        std::cout << "|";
		printer(contactos[i].getNickName());
        std::cout << "|";
		std::cout << std::endl;
	}
}

void	phoneBook::searchContact()
{	
	std::string	i;
	printHeader();
	printContacts();
	std::cout << std::endl << "ENTER AN INDEX" << std::endl;
    if (std::cin >> i) {
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        if (!contieneSoloNumeros(i))
        {
            std::cout << std::endl << "INVALID INDEX" << std::endl;
            return ;
        }
        int num = std::stoi(i);
        if (num < this->index)
            printContact(num);
        else
            std::cout << "INVALID INDEX" << std::endl;
    } else {
        std::cout << "Invalid input or EOF reached." << std::endl;
    }
}
