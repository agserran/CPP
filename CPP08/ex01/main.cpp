#include "Span.hpp"

int main() {
    try {
        // Test with small numbers
        Span sp(5);
        sp.addNumber(10);
        sp.addNumber(20);
        sp.addNumber(30);
        sp.addNumber(40);
        sp.addNumber(50);

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

        // Test with large number of numbers
        Span spLarge(10000);
        srand(static_cast<unsigned int>(time(0)));
        for (int i = 0; i < 10000; ++i) {
            spLarge.addNumber(rand());
        }

        std::cout << "Shortest span in large span: " << spLarge.shortestSpan() << std::endl;
        std::cout << "Longest span in large span: " << spLarge.longestSpan() << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
