#ifndef FILES_HPP
#define FILES_HPP

#include <iostream>
#include <fstream>

class files
{
	private:
		std::string	infile;
		std::string	outfile;
		std::string	s1;
		std::string	s2;
	public:
		void		setArgs(char **argv);
		void		reader();
		files();
		~files();
};

#endif