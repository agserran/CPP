#include "files.hpp"

int main(int argc, char **argv)
{
    files *file = new files;

    if (argc != 4)
    {
        std::cerr << "3 ARGUMENTS NEEDED" << std::endl;
    }
    else
    {
        if (argv[2] != nullptr && argv[2][0] != '\0' && argv[3] != nullptr && argv[3][0] != '\0')
        {
            file->setArgs(argv);
            file->reader();
        }
        else
        {
            std::cerr << "ERROR: String s1 or s2 is empty or null." << std::endl;
        }
    }

    delete file;
    return 0;
}
