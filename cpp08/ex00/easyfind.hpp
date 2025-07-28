#ifndef EASYFINDD_HPP
# define EASYFINDD_HPP

#include <algorithm>
#include <iterator>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	typename T::iterator number = std::find(container.begin(), container.end(), value);
	if (number == container.end())
		throw std::runtime_error("Value not found in the container");
	return number;
}