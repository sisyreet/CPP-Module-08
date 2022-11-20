#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template <typename C>
class Array
{
private:

	C *				_array;
	unsigned int	_len;

public:

	Array() : _array(NULL), _len(0) {}
	Array(Array const & src)
	{
		if (this != &src)
		{
			_len = src._len;
			_array = new C[_len];
			for (unsigned int i = 0; i < _len; i++)
				_array[i] = src._array[i];
		}
	}

	Array(unsigned int n): _len(n) 
	{
			_array = new C[_len];
			for (unsigned int i = 0; i < _len; i++)
				_array[i] = 0;
	}

	Array & operator=(Array const & src)
	{
		if (this != &src)
		{
			if (_array)
				delete _array;
			_len = src._len;
			_array = new C[_len];
			for (int i = 0; i < _len; i++)
				_array[i] = src._array[i];
		}
		return *this;
	}

	C & operator[](unsigned int n)
	{
		if (n >= _len)
			throw arrayException();
		return (_array[n]);
	}

	class arrayException : public std::exception
	{	
		virtual const char* what() const throw() 
		{ 
			return ("Something went wrong!"); 
		}
	};

	unsigned int	size()
	{
		return _len;
	}

	~Array() {delete _array;};
};

#endif