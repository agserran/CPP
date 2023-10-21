#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>

class phoneBook
{
private:
	Contact contactos[8];
	int		index;
	void	printContact(int i);
	void	printContacts();
	bool	contieneSoloNumeros(const std::string str);
public:
	phoneBook();
	~phoneBook();
	void	addContact();
	void	searchContact();
};

#endif