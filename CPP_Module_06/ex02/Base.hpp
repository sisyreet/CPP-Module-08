#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base
{
	public:
		virtual ~Base() {};
};

class A : public Base
{
	public:
		~A() {std::cout << "A destroyed\n";};
};

class B : public Base
{
	public:
		~B() {std::cout << "B destroyed\n";};
};

class C : public Base
{
	public:
		~C() {std::cout << "C destroyed\n";};
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif

