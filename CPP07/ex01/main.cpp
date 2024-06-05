#include "iter.hpp"

void    printNum(int n)
{
    std::cout << n << std::endl;
}

void    printString(std::string s)
{
    std::cout << s << std::endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};

    ::iter(arr, 7, printNum);

    std::string arr2[] = {"hello", "world", "!"};

    ::iter(arr2, 3, printString);

    return (0);
}