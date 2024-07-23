#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <exception>
# include <cstdlib>
# include <ctime>

class SpanOverflowException : public std::exception {
public:
    const char* what() const throw() {
        return "Span is full. Cannot add more numbers.";
    }
};

class NotEnoughNumbersException : public std::exception {
public:
    const char* what() const throw() {
        return "Not enough numbers to find a span.";
    }
};

class Span {

	private:
		unsigned int		maxSize;
		std::vector<int>	values;
	public:
		Span(unsigned int max);
		~Span();
		Span& operator=(const Span& other);
		Span(const Span& other);
		
		void addNumber(int value);
		int shortestSpan() const;
	 	int longestSpan() const;
};

# endif
