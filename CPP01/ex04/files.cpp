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

void files::reader()
{
    std::ifstream infile(this->infile.c_str());
    if (infile.is_open())
    {
        std::ofstream outfile(this->outfile.c_str());
        if (outfile.is_open())
        {
            std::string line;
            while (std::getline(infile, line))
            {
                size_t pos = 0;
                size_t s1_length = this->s1.length();

                while ((pos = line.find(this->s1, pos)) != std::string::npos)
                {
                    line = line.substr(0, pos) + this->s2 + line.substr(pos + s1_length);
                    pos += this->s2.length();
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
    {
        std::cerr << "OPENING FILE ERROR" << std::endl;
    }
}