#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
void easyfind(T a, int loco)
{
	typename T::iterator it = std::find(a.begin(), a.end(), loco);
	if (it != a.end())
		std::cout << "index: " << std::distance(a.begin(), it) << std::endl;
	else
		throw std::exception();
	return ;
}
#endif