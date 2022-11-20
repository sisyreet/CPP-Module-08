#include "Span.hpp"

int main()
{
	Span sp = Span(6);	

	sp.addNumber(1);
	sp.addNumber(5);
	sp.addNumber(9);
	sp.addNumber(13);
	sp.addNumber(17);
	sp.addNumber(21);

	try
	{
		sp.addNumber(123);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		std::cout << sp.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "**************************************" << std::endl;
	
	Span sp2(115000);
	for (int i = 0; i < 115000; i++)
		sp2.addNumber(rand());
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
	
	std::cout << "**************************************" << std::endl;

	Span sp3(10);
	std::vector<int> vec3;
	for(unsigned long i = 0; i < 10; i++) //11
		vec3.push_back(rand()%15009);
	
	try
	{
		sp3.addNumber(vec3.begin(), vec3.end());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	return 0;
}