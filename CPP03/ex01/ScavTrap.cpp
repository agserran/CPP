#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	this->name = "";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap spawned" << std::endl;
}

ScavTrap::ScavTrap(std::string name){
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap " << this->name << " spawned" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy){
	*this = copy;
	std::cout << "copy constructor called" << std::endl;
}

ScavTrap& ScavTrap:: operator=(const ScavTrap& copy){
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

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " is guarding the gate" << std::endl;
}