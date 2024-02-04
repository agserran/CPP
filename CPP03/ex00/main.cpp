#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap pepe("elmo");
	
	pepe.attack("duna");
	pepe.takeDamage(8);
	pepe.beRepaired(-10);
	pepe.beRepaired(3);
	pepe.takeDamage(20);
	pepe.beRepaired(50);
	return (0);	
}