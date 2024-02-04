#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define ZOO_SIZE 10

void leaks(void)
{
	system("leaks -q polymorphism");
}

int main()
{
//atexit(leaks);
const Animal* j = new Dog();
const Animal* i = new Cat();
delete j;//should not create a leak
delete i;
return 0;
}
