#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called!\n";
}

Intern::Intern(Intern const& src)
{
	(void)src;
	std::cout << "Intern copy constructor called!\n";
}

Intern& Intern::operator=(Intern const& src)
{
	if (this == &src)
		return *this;
	return *this;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called!\n";
}

const char* Intern::InternException::what() const throw()
{
	return ("Intern doesn't know such form!");
}

AForm* Intern::makeForm(std::string formName, std::string target) const
{
	AForm *form;

	if (formName == "newPresidential") {
		form = new PresidentialPardonForm(target);
		return form;
	} else if (formName == "newRobotomy") {
		form = new RobotomyRequestForm(target);
		return form;
	} else if (formName == "newShrubbery") {
		form = new ShrubberyCreationForm(target);
		return form;
	} else
		throw(InternException());

}
