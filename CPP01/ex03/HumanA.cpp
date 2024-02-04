#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): weapon(weapon)
{
	this->name = name;
	if (weapon.getType().length() == 0)
		std::cout << name << "has spawned bareknuckle" << std::endl;
	else
		std::cout << HumanA::name << "has spawned with" << weapon.getType() << std::endl;
}

HumanA::~HumanA(){}

void	HumanA::attack()
{
	if (weapon.getType().length() == 0)
		std::cout << HumanA::name << " kicked your face" << std::endl;
	else
		std::cout << HumanA::name << " attacked with" << weapon.getType() << std::endl;
}