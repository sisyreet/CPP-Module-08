#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template<typename T>
class MutantStack : public std::stack<T>
{
public:

	MutantStack(void) { return ; }
	MutantStack(MutantStack const &rhs) { *this = rhs; return; }
	virtual ~MutantStack(void) { return ; }
	MutantStack& operator=(MutantStack const &rhs)
	{
		if (this == &rhs)
			return (*this);
		static_cast< std::stack<T> >(*this) = static_cast< std::stack<T> >(rhs);
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
    typedef typename std::stack<T>::container_type::const_iterator const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin() { return (std::stack<T>::c.begin()); }
	iterator end() { return (std::stack<T>::c.end()); }

	const_iterator begin() const { return (std::stack<T>::c.begin()); }
	const_iterator end() const { return (std::stack<T>::c.end()); }

	reverse_iterator rbegin() { return (std::stack<T>::c.rbegin()); }
	reverse_iterator rend() { return (std::stack<T>::c.rend()); }

	const_reverse_iterator rbegin() const { return (std::stack<T>::c.rbegin()); }
	const_reverse_iterator rend() const { return (std::stack<T>::c.rend()); }
	

};

#endif
