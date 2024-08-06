#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <cstdlib>
#include <exception>



bool	DBparser();
std::map<std::string, float>	mapFiller();
void	exchangeCalculator(const std::map<std::string, float> &db, const std::string &input);