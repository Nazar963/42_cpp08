#include "Span.hpp"

Span::Span(){}

Span::Span(unsigned int N) : _size(N){}

Span::Span(const Span& copy)
{
	_size = copy._size;
	_loco = copy._loco;
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		this->_size = other._size;
		this->_loco = other._loco;
	}
	return (*this);
}

void	Span::addNumber(int zoro)
{
	if (_loco.size() < _size)
		_loco.push_back(zoro);
	else
		throw weAreAtFullCapacity();
	return ;
}

int	Span::shortestSpan()
{
	if (_loco.size() < 2)
		throw lowNumberOfElements();
	std::sort(_loco.begin(), _loco.end());
	int	short_loco = INT_MAX;
	for(size_t i = 0; i < _loco.size() - 1; i++)
	{
		int diff = _loco[i + 1] - _loco[i];
		if (diff < short_loco)
			short_loco = diff;
	}
	return (short_loco);
}

int	Span::longestSpan()
{
	if (_loco.size() < 2)
		throw lowNumberOfElements();
	int min = _loco[0];
	int max = _loco[0];
	for(size_t i = 1; i < _loco.size(); i++)
	{
		if (_loco[i] < min)
			min = _loco[i];
		else if (_loco[i] > max)
			max = _loco[i];
	}
	return (max - min);
}

void	Span::range(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	int i = *begin;
	// int holder;
	while (_loco.size() < _size && i < *end)
	{
		// if (i % 2 == 0)
		// {
		// 	holder = i + 13;
		// 	_loco.push_back(holder);
		// }
		// else if (i % 3 == 0)
		// {
		// 	holder = i - 3;
		// 	_loco.push_back(i - 3);
		// }
		// else
		// {
		// 	holder = i;
		// 	_loco.push_back(i);
		// }
		_loco.push_back(i);
		// std::cout << holder << " ,";
		i++;
	}
	// std::cout << std::endl;
}

Span::~Span(){}