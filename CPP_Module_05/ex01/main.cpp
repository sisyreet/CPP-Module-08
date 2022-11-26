#include "Form.hpp"

int main(void)
{
	Form form1; // 1, 1
	Form form2("form2", 50, 50);
	Form form3("form3", 100, 100);
	try
	{
		Form form5("form5", 15, -123);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Form form6("form6", 1, 123312312);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Form form4("form4", 150, 150);

	Bureaucrat biba("Biba", 1);
	Bureaucrat boba("Boba", 50);
	Bureaucrat baba("Baba", 100);
	Bureaucrat buba("Buba", 150);


	std::cout << '\n';
	std::cout << form1;
	std::cout << '\n';
	std::cout << form2;
	std::cout << '\n';
	
	
	biba.signForm(form1);
	biba.signForm(form2);
	biba.signForm(form3);
	biba.signForm(form4);
	boba.signForm(form1);
	boba.signForm(form2);
	boba.signForm(form3);
	boba.signForm(form4);
	baba.signForm(form1);
	baba.signForm(form2);
	baba.signForm(form3);
	baba.signForm(form4);
	buba.signForm(form1);
	buba.signForm(form2);
	buba.signForm(form3);
	buba.signForm(form4);

}