#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span
{
private:

	Span();
	unsigned int				_length;
	std::vector<unsigned int>	_integers;

public:

	Span(unsigned int n);
	Span(Span const & src);
	Span & operator=(Span const & src);
	~Span();

	void	addNumber(int newNum);
	void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	unsigned int	shortestSpan(void);
	int		longestSpan(void);

	class	longException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("there is no more space for your vile numbers!");
			}
	};

	class shortException : public std::exception
	{
		public:
			virtual const char* what() const throw()
			{
				return ("no span!");
			}
	};
};


#endif

