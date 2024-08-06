#include "BitcoinExchange.hpp"

static bool		dateParser(const std::string &date)
{
	if (date.length() != 10)
		return (false);
	for (size_t i = 0; i < date.length(); i++)
	{
		if (i == 4 || i == 7)
		{
			if (date[i] == '-')	
				continue;
			return (false);
		}
		if (!std::isdigit(date[i]))
			return (false);
	}
	int year = std::atoi(date.substr(0, 4).c_str());
	int	month = std::atoi(date.substr(5, 2).c_str());
	int	day = std::atoi(date.substr(8, 2).c_str());
	if (year > 2024 || (month > 12 || month < 1) || (day > 31 || day < 1))
		return (false);
	return (true);
}

bool	DBparser()
{
	std::ifstream db("data.csv");
	std::string line;
	if(!db)
	{
		return (false);
	}
	std::getline(db, line);
	if (line != "date,exchange_rate")
		return (false);
	while (std::getline(db, line))
	{
			std::string date = line.substr(0, 10);/*2024-01-24,375481238581235*/
			if (!dateParser(date))
			{
				return (false);
			}
			for (size_t i = 11; i < line.length(); i++)
			{
				int dotCount = 0;
				if (line[i] > 11 && line[i] == '.' && dotCount == 0)
				{
					dotCount++;
					continue;
				}
				if (!std::isdigit(line[i]))
					return (false);
			}
	}
	return (true);
}

std::map<std::string, float>	mapFiller()
{
	std::ifstream			db("data.csv");
	std::string				line;
	std::map<std::string, float>	value;
	getline(db, line);
	
	while (getline(db, line))
	{
		std::string date = line.substr(0, 10).c_str();
		float val = std::atof(line.substr(11, line.length() - 11).c_str());
		value.insert(std::pair<std::string, float>(date, val));
	}
	return (value);
}

static int						inputParser(const std::string &line)
{
			if (line.length() > 10)
			{
				for (size_t i = 10; i < line.length(); i++)
				{
					if ((i == 10 || i == 12) && line[i] == ' ')
						continue;
					if (i == 11 && line[i] == '|')
						continue;
					int dotCount = 0;
					int negative = 1;
					if (i == 13 && line[i] == '-')
					{
						negative = 2;
						continue;
					}
					if (i > 12 && line[i] == '.' && dotCount == 0)
					{
						dotCount++;
						continue;
					}
					if (!std::isdigit(line[i]))
					{
						return (negative);
					}
				}
			}
	return (0);
}

static float	findDate(const std::map<std::string, float> &db, const std::string &targetDate)
{
	std::map<std::string, float>::const_iterator it = db.lower_bound(targetDate);
    if (it == db.end()) {
        --it;
        return it->second;
    } else if (it == db.begin()) {
        return it->second;
    } else {
        std::map<std::string, float>::const_iterator prevIt = it;
        --prevIt;

        if (targetDate < it->first) {
            return prevIt->second;
        } else {
            return it->second;
        }
    }
}

void	exchangeCalculator(const std::map<std::string, float> &db, const std::string &input)
{
	std::ifstream	in(input.c_str());
	std::string		line;

	getline(in, line);
	
	while (getline(in, line))
	{
		std::string date = line.substr(0, 10).c_str();
		if (!dateParser(date))
		{
			std::cout << "Error: invalid date => " << date << std::endl;
		}
		else
		{
			std::string strVal = line.substr(13, line.length() - 13).c_str();
			int x = inputParser(strVal);
			if (x == 2)
				std::cout << "Error: negative number => " << strVal << std::endl;
			else
				{
					float	amount = std::atof(line.substr(13, line.length() - 13).c_str());
					if (amount < 0 || amount > 1000)
					{
						if (amount < 0)
						{
							std::cout << "Error: negative amount." << std::endl;
						}
						if (amount > 1000)
						{
							std::cout << "Error: too large amount" << std::endl;
						}
					}
					else
					{
						float	val = findDate(db, date);
						std::cout << date << " => " << amount << " = " << amount * val << std::endl;
					}
				}
		}
	}
}