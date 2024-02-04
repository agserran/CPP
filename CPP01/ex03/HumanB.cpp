#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	std::cout << name << " spawned" << std::endl;
	this->weapon = nullptr;
}

HumanB::~HumanB()
{

}

void	HumanB::setWeapon(Weapon& Weapon)
{
	this->weapon = &Weapon;
}

void HumanB::attack()
{
	if (weapon == nullptr)
		std::cout << this->name << " kicked you" << std::endl;
	else
		std::cout << this->name << " attacked with " << this->weapon->getType() << std::endl; 
}