#include "files.hpp"

files::files(){
}

files::~files(){}

void files::setArgs(char **argv)
{
	this->infile = argv[1];
	this->outfile = this->infile + ".replace";
	this->s1 = argv[2];
	this->s2 = argv[3];
}

void	files::reader()
{
	std::ifstream infile(this->infile.c_str());
	if (infile.is_open())
	{
		std::ofstream outfile(this->outfile.c_str());
		if (outfile.is_open())
		{
			std::string	line;
			while (std::getline(infile, line))
			{
				size_t	pos = 0;
				while ((pos = line.find(this->s1, pos)) != std::string::npos)
				{
					line.replace(pos, s1.length(), s2);
					pos += s2.length();
				}
				outfile << line << std::endl;
			}
			outfile.close();
		}
		else
		{
			std::cerr << "ERROR WHILE CREATING OUTFILE" << std::endl;
			infile.close();
		}
	}
	else
		std::cerr << "OPENING FILE ERROR" << std::endl;
}
