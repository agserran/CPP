#include "Zombie.hpp"

int	main()
{
	Zombie *z;

	z = newZombie("HORSE LUIS");
	z->announce();
	delete (z);
	randomChump("SAMU");
	return (0);
}