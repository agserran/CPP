#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	~Cat();
	Cat(const Cat& copy);
	Cat& operator=(const Cat& copy);
	virtual void makeSound() const;
	void setBrainNumIdeas();
	void setBrainStringIdeas();
	void printBrainIdeas();
};

#endif