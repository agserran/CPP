#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	std::cout << name << "spawned" << std::endl;
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
	std::string	type;

	type = this->weapon->getType();
	if (type.length() == 0)
		std::cout << this->name << "kicked you" << std::endl;
	else
		std::cout << this->name << "attacked with " << this->weapon->getType() << std::endl; 
}