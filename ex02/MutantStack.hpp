#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <stack>

template <typename T>
class MutantStack
{
	protected:
		std::deque<T>	c;
	public:
		typedef typename std::deque<T>::iterator iterator;

		MutantStack(){}
		MutantStack(MutantStack const & copy) : c(copy) {};
		MutantStack& operator=(MutantStack const & other)
		{
			if (this != &other)
			{
				this->c = other.c;
			}
			return (*this);
		}

		bool empty() const { return c.empty(); }
		std::size_t size() const { return c.size(); }
		T& top() { return c.back(); }
		const T& top() const { return c.back(); }
		void push(const T& value) { c.push_back(value); }
		void pop() { c.pop_back(); }
		iterator	begin() { return (this->c.begin()); }
		iterator	end() { return (this->c.end()); }
		operator std::stack<T>()
		{
			std::stack<T> s;
			for (iterator it = c.begin(); it != c.end(); ++it)
				s.push(*it);
			return (s);
		}

		~MutantStack(){ this->c.clear(); }
};

#endif