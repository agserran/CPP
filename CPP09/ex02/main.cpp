#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		throw InvalidInputException();
		return (-1);
	}
	
	std::vector<int> num = parser(argc, argv);

	std::cout << "Before:";
	for (std::vector<int>::iterator it = num.begin(); it != num.end(); ++it)
	{
		std::cout << " " << *it;
	}
	std::cout << std::endl;

	std::vector<int> temp = num;
	std::clock_t	start = std::clock();
	mergeInsertSortVector(temp);
	std::clock_t	end = std::clock();
	double		vectorTime = static_cast<double>(end - start)  / CLOCKS_PER_SEC;
	std::cout << "After:";
	for (std::vector<int>::iterator it = temp.begin(); it != temp.end(); ++it)
	{
		std::cout << " " << *it;
	}
	std::cout << std::endl;
	
	std::cout << "Time to process a range of " << argc - 1 << "elements with std::vector : "<< std::fixed << std::setprecision(9) << vectorTime << " us" << std::endl;

	std::deque<int>		deq(num.begin(), num.end());
	start = std::clock();
	mergeInsertSortDeque(deq);
	end = std::clock();
	double	deqTime = static_cast<double>(end - start) / CLOCKS_PER_SEC;

	std::cout << "Time to process a range of " << argc - 1 << "elements with std::deque : "<< std::fixed << std::setprecision(8) << deqTime << " us" << std::endl;

	return (0);
}