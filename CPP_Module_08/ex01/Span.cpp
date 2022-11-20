#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int n) : _length(n)	{}

Span::Span(Span const & src)
{
	this->_integers = src._integers;
}

Span & Span::operator=(Span const & src)
{
	if (this != &src)
	{
		this->_integers.clear();
		this->_integers = src._integers;
		return *this;
	}
	else
		return *this;
}

Span::~Span() {}

void Span::addNumber(int newNum)
{
	if (this->_integers.size() < this->_length)
		this->_integers.push_back(newNum);
	else
		throw longException();
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for(std::vector<int>::iterator it = begin; it != end; ++it)
	{
		if (_integers.size() == _length)
			throw longException();
		_integers.push_back(*it);
	}
}

unsigned int	Span::shortestSpan(void)
{
	if (_integers.size() < 2)
		throw shortException();
	
	unsigned int res = _integers[1] - _integers[0];
	
	std::sort(this->_integers.begin(), this->_integers.end());
	for (unsigned long i = 1; i < _integers.size(); i++)
		if (_integers[i] - _integers[i - 1] < res)
			res = _integers[i] - _integers[i - 1];

	return res;
}

int	Span::longestSpan(void)
{
	if (_integers.size() < 2)
		throw shortException();
	std::sort(this->_integers.begin(), this->_integers.end());
	return _integers.back() - _integers.front();

	return 1;
}
