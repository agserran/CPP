#include "Zombie.hpp"

int	main()
{
	Zombie *horda;

	horda = zombieHorde(6, "escoces");
	delete[] horda;
	return (0);
}