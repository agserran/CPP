#include "RPN.hpp"

int evaluateRPN(const std::string& expression) {
    std::stack<int> stack;
    std::istringstream tokens(expression);
    std::string token;

    while (tokens >> token) {
        // Check if the token is an operator
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (stack.size() < 2) {
                throw MyException("Invalid expression");
            }
            int operand2 = stack.top(); stack.pop();
            int operand1 = stack.top(); stack.pop();

            if (token == "+") {
                stack.push(operand1 + operand2);
            } else if (token == "-") {
                stack.push(operand1 - operand2);
            } else if (token == "*") {
                stack.push(operand1 * operand2);
            } else if (token == "/") {
                if (operand2 == 0) {
                    throw MyException("Division by zero");
                }
                stack.push(operand1 / operand2);
            }
        } else {
            // Token is an operand
            int operand = std::atoi(token.c_str());
            stack.push(operand);
        }
    }

    if (stack.size() != 1) {
        throw MyException("Invalid expression");
    }

    return stack.top();
}