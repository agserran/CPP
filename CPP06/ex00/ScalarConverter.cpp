#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::~ScalarConverter(){}

static bool checkChar(const std::string& str) {
	if (str.length() == 1 && str[0] > 32 && str[0] < 127)
		return (true);
	return (false);
}

static bool checkInt(const std::string& str)
{
	if (!isdigit(str[0]) &&((str[0] != '+') && (str[0] != '-')))
		return (false);
	for (size_t i = 1; i < str.length();i++)
	{
		if (!isdigit(str[i]))
			return (false);
	}

	return (true);
}

static bool	checkFloat(const std::string& str)
{
	int	dotCount = 0;
	if (str[str.length() - 1] != 'f')
		return (false);

	if (!isdigit(str[0]) &&((str[0] != '+') && (str[0] != '-')))
		return (false);

	for (size_t i = 1; i < str.length() - 1; i++) {
		if (!isdigit(str[i])) {
			if (str[i] == '.') {
				dotCount++;
				if (dotCount > 1) {
					return (false);
				}
			} else {
				return (false);
			}
		}
	}

	return (true);
}

static bool checkDouble(const std::string& str) {
	int dotCount = 0;

	if (!isdigit(str[0]) && str[0] != '+' && str[0] != '-') {
		return false;
	}

	for (size_t i = 1; i < str.length() - 1; i++) {
		if (!isdigit(str[i])) {
			if (str[i] == '.') {
				dotCount++;
				if (dotCount != 1) {
					return (false);
				}
			} else {
				return (false);
			}
		}
	}

	return (true);
}

static	int	getType(const std::string& str)
{
	if (checkChar(str))
		return (CHAR);
	if (checkInt(str))
		return (INT);
	if (checkFloat(str))
		return (FLOAT);
	if (checkDouble(str))
		return (DOUBLE);
	if (str == "nan" || str == "-inf" || str == "inf" || str == "nanf")
		return (SPECIAL);
	return (-1);
}

static bool isZero(std::string str) {
	size_t dotPos = str.find_last_of('.');

	if (dotPos == std::string::npos) {
		return false;
	}

	return (str.substr(dotPos + 1) == "0");
}

static bool isFloatZero(const std::string& str) {
	if (str[str.length() - 1] == 'f' && str[str.length() - 2] == '0' && str[str.length() - 3] == '.')
		return (true);
	return (false);
}

static void	printChar(std::string str)
{
	int c = static_cast<int>(str[0]);
	if (c > 32 && c < 127)
		{
			std::cout << "char: '" << static_cast<char>(c) << "'" << std::endl;
		}
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
}

static void	printInt(const std::string str)
{
	double aux = strtod(str.c_str(), NULL);

	if (aux < 32 || aux > 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(aux) << "'" << std::endl;

	if (aux < std::numeric_limits<int>::min() || aux > std::numeric_limits<int>::max())
		std::cout << "int: overflow" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(aux) << std::endl;
	std::cout << "double: " << aux << ".0" << std::endl;
	std::cout << "float: " << static_cast<float>(aux) << ".0f" << std::endl;
}

static void printDouble(const std::string str) {
	double aux = strtod(str.c_str(), NULL);

	if (aux < 32 || aux > 127) {
		std::cout << "char: Non displayable" << std::endl;
	} else {
		std::cout << "char: '" << static_cast<char>(aux) << "'" << std::endl;
	}

	if (aux < std::numeric_limits<int>::min() || aux > std::numeric_limits<int>::max()) {
		std::cout << "int: overflow" << std::endl;
	} else {
		std::cout << "int: " << static_cast<int>(aux) << std::endl;
	}

	if (isZero(str.c_str())) {
		std::cout << "double: " << aux << ".0" << std::endl;
		std::cout << "float: " << static_cast<float>(aux) << ".0f" << std::endl;
	} else {
		std::cout << "double: " << aux << std::endl;
		std::cout << "float: " << static_cast<float>(aux) << "f" << std::endl;
	}
}

static void printFloat(const std::string str) {
	float f = strtof(str.c_str(), NULL);

	if (f < 32 || f > 127) {
		std::cout << "char: Non displayable" << std::endl;
	} else {
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	}

	if (f < std::numeric_limits<int>::min() || f > std::numeric_limits<int>::max()) {
		std::cout << "int: overflow" << std::endl;
	} else {
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	}

	if (isFloatZero(str.c_str())) {
		std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
		std::cout << "float: " << f << ".0f" << std::endl;
	} else {
		std::cout << "double: " << static_cast<double>(f) << std::endl;
		std::cout << "float: " << f << "f" << std::endl;
	}
}

static void	printSpecial(const std::string str)
{
	double aux = strtod(str.c_str(), NULL);
	std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: Non displayable" << std::endl;

	std::cout << "double: " << aux << std::endl;
	std::cout << "float: " << static_cast<float>(aux) << "f" << std::endl;
}

void	ScalarConverter::convert(const std::string literalStr)
{
	int type = getType(literalStr);
	if (type == INT)
		printInt(literalStr);
	if (type == FLOAT) {
		printFloat(literalStr);
	}
	if (type == DOUBLE) {
		printDouble(literalStr);
	}
	if (type == CHAR)
		printChar(literalStr);
	if (type == SPECIAL) {
		printSpecial(literalStr);
	}
	if (type == -1) {
		std::cout << "cannot cast :(" << std::endl;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ScalarConverter::convert(argv[1]);
		return (1);
	}
	std::cout << "non valid arguments" << std::endl;
	return (0);
}