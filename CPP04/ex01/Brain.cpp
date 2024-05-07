#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& copy)
{
	for (int i = 0; i < 100; ++i) {
            this->ideas[i] = copy.ideas[i];
        }
    *this = copy;
    std::cout << "Brain copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& copy) {
    if (this != &copy) {
        for (int i = 0; i < 100; ++i) {
            this->ideas[i] = copy.ideas[i];
        }
    }
    std::cout << "Brain assignation operand called" << std::endl;
    return (*this);
}

void Brain::setNumIdeas(){
    for (int i = 0; i < 100; ++i) {
        std::stringstream ss;
        ss << i;
        this->ideas[i] = ss.str();
    }
}

void Brain::setStringIdeas(){
	for (int i = 0; i < 100; ++i) {
		std::stringstream ss;
        ss << i;
		this->ideas[i] = "idea" + ss.str();
	}
}

void Brain::printIdeas(){
	for (int i = 0; i < 100; ++i) {
		std::cout << this->ideas[i] << std::endl;
	}
}