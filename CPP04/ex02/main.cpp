#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


void leaks(void)
{
	system("leaks -q polymorphism");
}
int	main(void)
{
	atexit(leaks);
	const Dog *an = new Dog();
	an->makeSound();
	delete an;
	return (0);
}
