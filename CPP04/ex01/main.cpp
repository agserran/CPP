#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
const Animal* j = new Dog();
Cat* i = new Cat();
Cat* k = new Cat();
k->setBrainStringIdeas();
i->setBrainNumIdeas();
i->printBrainIdeas();
i = k;
std::cout << "i = k" << std::endl;
i->printBrainIdeas();
delete j;
delete i;
return 0;
}
