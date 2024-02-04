#include "ScavTrap.hpp"

int	main(void)
{
	{
		ClapTrap clav("\033[0;31mClavito\033[0m");
		ScavTrap scav("\033[0;32mScavenger\033[0m");
		clav.takeDamage(5);
		clav.beRepaired(10);
		clav.attack("Tabla");
		clav.takeDamage(50);

		scav.guardGate();
		scav.takeDamage(50);
		scav.beRepaired(10);
		scav.attack("Hunter");
		scav.takeDamage(50);
	}
	return (0);	
}