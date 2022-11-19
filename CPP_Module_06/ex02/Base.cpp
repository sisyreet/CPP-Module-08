#include "Base.hpp"

Base* generate(void)
{
	switch (rand() % 3)
	{
	case 0:
		return (new A);
		break;
	case 1:
		return (new B);
		break;
	case 2:
		return (new C);
		break;
	}
	return(NULL);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Type A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type C" << std::endl;
	else
		std::cout << "No Type" << std::endl;
}

void identify(Base& p)
{
	try
	{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "Type A" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void) (e);
	}
	try
	{
		B& b = dynamic_cast<B&>(p);
		(void)(b);
		std::cout << "Type B" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
	try
	{
		C& c = dynamic_cast<C&>(p);
		(void) (c);
		std::cout << "Type C" << std::endl;
	}
	catch(const std::exception& e)
	{
		(void)e;
	}
}