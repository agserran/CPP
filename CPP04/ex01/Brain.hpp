#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class Brain
{
private:
    std::string ideas[100];
public:
    Brain();
    ~Brain();
    Brain(const Brain& copy);
    Brain& operator=(const Brain& copy);
	void setNumIdeas();
	void setStringIdeas();
	void printIdeas();
};

#endif