#include "Zombie.hpp"

/*void	leaks()
{
	system("leaks zombieHorde");
}
*/
int	main()
{
	Zombie *horda;
	/*atexit(leaks);*/
	horda = zombieHorde(6, "escoces");
	delete[] horda;
	return(0);
}