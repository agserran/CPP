#include "FragTrap.hpp"

FragTrap::FragTrap(){
	this->name = "";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap spawned" << std::endl;
}

FragTrap::FragTrap(std::string name){
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap " << this->name << " spawned" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy){
	*this = copy;
	std::cout << "copy constructor called" << std::endl;
}

FragTrap& FragTrap:: operator=(const FragTrap& copy){
	if (this != &copy)
	{
		this->name = copy.name;
		this->hitPoints = copy.hitPoints;
		this->energyPoints = copy.energyPoints;
		this->attackDamage = copy.attackDamage;
	}
	std::cout << "asignation operator called" << std::endl;
    return (*this);
}

void FragTrap::highFivesGuys(void)
{
    if (this->hitPoints > 0)
        std::cout << "Anyone High Five?" << std::endl;
}