#include "Array.hpp"

int main() {
    try {
        // Test default constructor
        Array<int> a1;
        std::cout << "Size of a1: " << a1.size() << std::endl;

        // Test parameterized constructor
        Array<int> a2(5);
        std::cout << "Size of a2: " << a2.size() << std::endl;
        for (unsigned int i = 0; i < a2.size(); ++i) {
            std::cout << "a2[" << i << "]: " << a2[i] << std::endl;
        }

        // Test copy constructor
        Array<int> a3(a2);
        std::cout << "Size of a3: " << a3.size() << std::endl;
        for (unsigned int i = 0; i < a3.size(); ++i) {
            std::cout << "a3[" << i << "]: " << a3[i] << std::endl;
        }

        // Test assignment operator
        Array<int> a4;
        a4 = a2;
        std::cout << "Size of a4: " << a4.size() << std::endl;
        for (unsigned int i = 0; i < a4.size(); ++i) {
            std::cout << "a4[" << i << "]: " << a4[i] << std::endl;
        }

        // Test subscript operator and exception handling
        try {
            std::cout << a2[5] << std::endl;
        } catch (const std::exception& e) {
            std::cout << "Exception caught: " << e.what() << std::endl;
        }

    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}