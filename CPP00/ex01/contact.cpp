#include "contact.hpp"

Contact::Contact(){

}
Contact::~Contact(){
	
}
void	Contact::setName(std::string name)
{
	this->name = name;
}

void	Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void	Contact::setNickName(std::string nickName)
{
	this->nickName = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestsecret(std::string darkestsecret)
{
	this->darkestSecret = darkestSecret;
}

std::string		Contact::getName()
{
	return (this->name);
}
std::string		Contact::getLastName()
{
	return (this->lastName);
}
std::string		Contact::getNickName()
{
	return (this->nickName);
}
std::string		Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}
std::string		Contact::getDarkestsecret()
{
	return (this->darkestSecret);
}
