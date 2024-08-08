#pragma once

# include <iostream>
# include <stack>
# include <sstream>
# include <string>
# include <cstdlib>

#include <exception>
#include <string>

class MyException : public std::exception {
private:
    std::string message;

public:
	MyException(const std::string& msg) : message(msg) {}

	virtual ~MyException() throw() {}
    virtual const char* what() const throw() {
        return message.c_str();
    }
};

int evaluateRPN(const std::string& expression);