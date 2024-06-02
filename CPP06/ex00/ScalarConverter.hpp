#pragma once
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <cstdlib>
#include <iomanip>

enum type{
	INT,
	FLOAT,
	DOUBLE,
	CHAR,
	SPECIAL
};

class	ScalarConverter{
	public:
		ScalarConverter();
		~ScalarConverter();
		static void convert(const std::string literalStr);
};

#endif