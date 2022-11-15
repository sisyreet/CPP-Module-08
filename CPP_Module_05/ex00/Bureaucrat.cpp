#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Prince Charls"), _grade(1)
{
	std::cout << "Bureaucrat default constructor called!\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const& src) : _grade(src._grade)
{
	std::cout << "Bureaucrat copy constructor called!\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat name + grade constructor called!\n";
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	else if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else
		this->_grade = grade;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const& src)
{
	if (this == &src)
		return *this;
	this->_grade = src._grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called!\n";
}

std::ostream& operator<<(std::ostream& os, Bureaucrat const& src)
{
	return os << src.getName() << ", bureaucrat grade " << src.getGrade() << std::endl;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

void Bureaucrat::incrementGrade()
{
	if (this->_grade == 1)
		throw(Bureaucrat::GradeTooHighException());
	else
		this->_grade--;
}

void Bureaucrat::decrementGrade()
{
	if (this->_grade == 150)
		throw(Bureaucrat::GradeTooLowException());
	else
		this->_grade++;
}

/* EXCEPTIONS */

const char* Bureaucrat::Exception::what() const throw()
{
	return ("Bureaucrat Exception!");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade cannot be higher than 1!");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade cannot be lower than 150!");
}