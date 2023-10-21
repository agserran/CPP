#ifndef PHONE_HPP
#define PHONE_HPP

#include <string>

class   Contact{
    public:
    void			setName(std::string name);
    void			setLastName(std::string lastName);
    void			setNickName(std::string nickName);
    void			setPhoneNumber(std::string phoneNumber);
    void			setDarkestsecret(std::string darkestSecret);

	std::string		getName();
    std::string		getLastName();
    std::string		getNickName();
    std::string		getPhoneNumber();
    std::string		getDarkestsecret();
	Contact();
	~Contact();
    private:
    std::string name;
    std::string lastName; 
    std::string nickName;
    std::string phoneNumber;
    std::string darkestSecret;
};

#endif