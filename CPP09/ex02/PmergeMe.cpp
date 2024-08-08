#include "PmergeMe.hpp"

std::vector<int>	parser(int argc, char **argv)
{
	std::vector<int>	ret;
	for (int i = 1; i < argc; i++)
	{
		int num = std::atoi(argv[i]);
		if (num <= 0)
			throw InvalidInputException();
		ret.push_back(num);
	}
	return (ret);
}

void mergeInsertSortVector(std::vector<int>& vec) {
    if (vec.size() <= 1)
		throw InvalidInputException();

    std::vector<int> temp;
    temp.reserve(vec.size());

    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        std::vector<int>::iterator pos = std::lower_bound(temp.begin(), temp.end(), *it);
        temp.insert(pos, *it);
    }

    vec = temp;
}

void	mergeInsertSortDeque(std::deque<int>& deq)
{
	if (deq.size() < 1)
		throw InvalidInputException();

	std::deque<int>	temp;

	for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); ++it)
	{
		std::deque<int>::iterator pos = std::lower_bound(temp.begin(), temp.end(), *it);
        temp.insert(pos, *it);
	}

	deq = temp;
}