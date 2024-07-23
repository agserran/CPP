#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <list>

class NotFoundException : public std::exception {
	public:
		const char* what() const throw() {
			return ("Element not found");
		}
};


template <typename T>
typename T::const_iterator easyfind(const T& container, int value) {

	typename T::const_iterator i = std::find(container.begin(), container.end(), value);
	if (i == container.end())
		throw NotFoundException();

	return (i);
};
#endif
