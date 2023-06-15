#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>

class Span
{
	private:
		unsigned int _size;
		std::vector<int> _loco;
	public:
		Span();
		Span(unsigned int N);
		Span(const Span& copy);
		Span& operator=(const Span& other);

		void	addNumber(int zoro);
		int		shortestSpan();
		int		longestSpan();
		void	range(std::vector<int>::iterator begin, std::vector<int>::iterator end);

		~Span();

		class weAreAtFullCapacity : public std::exception
		{
			public : virtual const char* what() const throw() { return ("we are at full capacity"); }
		};
		class lowNumberOfElements : public std::exception
		{
			public : virtual const char* what() const throw() { return ("low number of elements");}
		};
};

#endif