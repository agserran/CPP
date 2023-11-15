#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
	std::string type;

	type = weapon.getType();
	if (type.length() == 0)
		std::cout << name << "has spawned bareknuckle" << std::endl;
	else
		std::cout << HumanA::name << "has spawned with" << weapon.getType() << std::endl;
}

HumanA::~HumanA(){}

void	HumanA::attack()
{
	std::string type;

	type = weapon.getType();
	if (type.length() == 0)
		std::cout << HumanA::name << "kicked your face" << std::endl;
	else
		std::cout << HumanA::name << "attacked with" << type << std::endl;
}