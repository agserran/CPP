#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal *an = new Dog();
	an->makeSound();
	delete an;
	return (0);
}
