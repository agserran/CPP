#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	this->name = "";
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << "Claptrap created" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	this->name = name;
	this->hitPoints = 10;
	this->energyPoints = 10;
	this->attackDamage = 0;
	std::cout << name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy){
	*this = copy;
	std::cout << "copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << "destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& copy) {
    if (this != &copy){
        this->name = copy.name;
        this->hitPoints = copy.hitPoints;
        this->energyPoints = copy.energyPoints;
        this->attackDamage = copy.attackDamage;
    }
	std::cout << "asignation operator called" << std::endl;
    return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPoints <= 0)
		std::cout << name << " Can do nothing because he is out of energy" << std::endl;
	if (this->hitPoints <= 0)
		std::cout <<name << " Can do nothing cause is dead" << std::endl;
	else
		{
			std::cout << name << " attacks " << target << " causing " << this->attackDamage << " points of damage!" << std::endl;
			this->energyPoints -= 1;
		}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if ((int)amount  < 0)
		std::cout << "cannot be a negative amount" << std::endl;
	else
	{
		if (this->energyPoints <= 0)
			std::cout << name << "cannot repair cause is out of energy" << std::endl;
		if (this->hitPoints <= 0)
			std::cout << name << " cannot repair cause is dead D:" << std::endl;
		else
		{
			this->hitPoints += amount;
			this->energyPoints -= 1;
		}
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->hitPoints <= 0)
		std::cout << "stop! stop! he is already dead"<< std::endl;
	else{
		if ((int)amount < 0)
			std::cout << "non valid amount of damage it must be positive" << std::endl;
		else
		{
			std::cout << this->name << " takes " << amount << " damage" << std::endl;
			this->hitPoints -= amount;
		}
	}
}