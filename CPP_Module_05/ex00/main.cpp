#include "Bureaucrat.hpp"

void	tests(Bureaucrat& Biba, Bureaucrat& Boba)
{
	try
	{
		Biba.incrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Boba.decrementGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat Buba("Buba", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		try
	{
		Bureaucrat Baba("Baba", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main(void)
{
	Bureaucrat Biba("Biba", 1);
	Bureaucrat Boba("Boba", 150);

	std::cout << "=============================" << std::endl;
	std::cout << Boba;
	std::cout << Biba;
	std::cout << "=============================" << std::endl;

	tests(Biba, Boba);
	
}