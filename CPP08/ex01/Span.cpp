#include "Span.hpp"

Span::Span(unsigned  int max) : maxSize(max) {}

Span::~Span() {}

Span::Span(const Span& other) : maxSize(other.maxSize), values(other.values) {}

Span&	Span::operator=(const Span& other)
{
	maxSize = other.maxSize;
	values = other.values;
	return (*this);
}

void Span::addNumber(int value)
{
	if (this->values.size() >= this->maxSize)
		throw SpanOverflowException();
	this->values.push_back(value);
}

int Span::shortestSpan() const {
        if (values.size() < 2) {
            throw NotEnoughNumbersException();
        }
        std::vector<int> sortedNumbers = values;
        std::sort(sortedNumbers.begin(), sortedNumbers.end());
        int minSpan = sortedNumbers[1] - sortedNumbers[0];
        for (size_t i = 1; i < sortedNumbers.size() - 1; ++i) {
            int span = sortedNumbers[i + 1] - sortedNumbers[i];
            if (span < minSpan) {
                minSpan = span;
            }
        }
        return minSpan;
}

int Span::longestSpan() const{
	if (values.size() < 2) {
            throw NotEnoughNumbersException();
        }
        int minNumber = *std::min_element(values.begin(), values.end());
        int maxNumber = *std::max_element(values.begin(), values.end());
        return maxNumber - minNumber;
}
