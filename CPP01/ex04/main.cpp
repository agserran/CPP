#include "files.hpp"

int	main(int argc, char **argv)
{
	files *file = new files;
	if (argc != 4)
	{
		std::cerr << "JUST 3 ARGUMENTS" << std::endl; 
	}
	file->setArgs(argv);
	file->reader();
}