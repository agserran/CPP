#include "BitcoinExchange.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: non valid input amount" << std::endl;
		return (-3);
	}
	bool x = DBparser();
	if (!x)
	{
		std::cout << "Non valid DataBase" << std::endl;
		return (-1);
	}

	std::map<std::string, float> mapi = mapFiller();

	exchangeCalculator(mapi, argv[1]);
	return 0;
}