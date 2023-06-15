#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <stack>

template <typename T>
class MutantStack
{
	private:
		std::vector<T> _loco;
	public:
		typedef typename std::vector<T>::iterator iterator;
		MutantStack(){}
		MutantStack(const MutantStack& copy) : _loco(copy._loco) {}
		MutantStack& operator=(const MutantStack& other)
		{
			if (this != &other)
				_loco = other._loco;
			return *this;
		}
		void push(T boh)
		{
			_loco.push_back(boh);
		}
		void pop()
		{
			_loco.pop_back();
		}
		T& top()
		{
			return (_loco.back());
		}
		unsigned int size()
		{
			return (_loco.size());
		}
		iterator	begin()
		{
			return (_loco.begin());
		}
		iterator	end()
		{
			return (_loco.end());
		}
		operator std::stack<T>()
		{
			std::stack<T> s;
			for(iterator it = _loco.begin(); it != _loco.end(); ++it)
			{
				s.push(*it);
			}
			return s;
		}
		~MutantStack(){}
};

#endif