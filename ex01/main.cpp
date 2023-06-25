#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	try
	{
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		// sp.addNumber(12);
	}
	catch(Span::weAreAtFullCapacity& e)
	{
		std::cout << e.what() << std::endl;
		return (0);
	}
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(Span::lowNumberOfElements& e)
	{
		std::cout << e.what() << std::endl;
		return (0);
	}

	// std::vector<int> levi(10001);
	// levi[10001] = 10001;
	// Span eren(10001);
	// eren.range(levi.begin(), levi.end());
	// try
	// {
	// 	std::cout << eren.shortestSpan() << std::endl;
	// 	std::cout << eren.longestSpan() << std::endl;
	// }
	// catch(Span::lowNumberOfElements& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	return (0);
}
