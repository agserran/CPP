#include "MutantStack.hpp"
#include <list>

int main() {
    MutantStack<int> mstack;

    // Insert elements
    mstack.push(1);
    mstack.push(2);
    mstack.push(3);
    mstack.push(4);
    mstack.push(5);

    // Normal iteration
    std::cout << "Normal iteration:\n";
    for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Reverse iteration
    std::cout << "Reverse iteration:\n";
    for (MutantStack<int>::reverse_iterator rit = mstack.rbegin(); rit != mstack.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    // Constant iterator (non-modifiable)
    std::cout << "Constant iteration:\n";
    const MutantStack<int> constStack = mstack;
    for (MutantStack<int>::const_iterator it = constStack.begin(); it != constStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Constant reverse iterator (non-modifiable)
    std::cout << "Constant reverse iteration:\n";
    for (MutantStack<int>::const_reverse_iterator rit = constStack.rbegin(); rit != constStack.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    // Test empty stack
    std::cout << "Testing empty stack:\n";
    MutantStack<int> emptyStack;
    std::cout << "Normal iteration on empty stack:\n";
    for (MutantStack<int>::iterator it = emptyStack.begin(); it != emptyStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Reverse iteration on empty stack:\n";
    for (MutantStack<int>::reverse_iterator rit = emptyStack.rbegin(); rit != emptyStack.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    // Test stack with a single element
    std::cout << "Testing stack with a single element:\n";
    MutantStack<int> singleElementStack;
    singleElementStack.push(42);

    std::cout << "Normal iteration on single element stack:\n";
    for (MutantStack<int>::iterator it = singleElementStack.begin(); it != singleElementStack.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    std::cout << "Reverse iteration on single element stack:\n";
    for (MutantStack<int>::reverse_iterator rit = singleElementStack.rbegin(); rit != singleElementStack.rend(); ++rit) {
        std::cout << *rit << " ";
    }
    std::cout << std::endl;

    return 0;
}
