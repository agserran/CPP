#include "RPN.hpp"

int main(int argc, char **argv) {
	if (argc != 2)
	{
		std::cout << "Error invalid arguments amount." << std::endl;
		return (-1);
	}
    try {
        int result = evaluateRPN(argv[1]);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}