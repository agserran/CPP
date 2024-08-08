#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
#include <stdexcept>
#include <ctime>
#include <algorithm>
#include <iomanip>

class InvalidInputException : public std::exception {
public:
    const char* what() const throw() {
        return "Invalid input: Please provide a sequence of positive integers.";
    }
};

std::vector<int>	parser(int argc, char **argv);
void				mergeInsertSortVector(std::vector<int>& vec);
void				mergeInsertSortDeque(std::deque<int>& deq);