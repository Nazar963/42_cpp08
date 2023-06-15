#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> zoro;
	zoro.push_back(1);
	zoro.push_back(2);
	zoro.push_back(3);
	zoro.push_back(4);
	zoro.push_back(5);
	zoro.push_back(6);
	zoro.push_back(7);
	zoro.push_back(8);
	zoro.push_back(9);
	try
	{
		easyfind(zoro, 4);
	}
	catch (std::exception& e)
	{
		std::cout << "number not found" << std::endl;
	}
}