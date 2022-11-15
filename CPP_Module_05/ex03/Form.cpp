#include "Form.hpp"

Form::Form() : _name("Unnamed Form"), _isSigned(0), _gradeToSign(1), _gradeToExec(1)
{
	std::cout << "Form default constructor called!\n";
}

Form::Form(Form const& src) : _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
{
	std::cout << "Form default constructor called!\n";
}

Form::Form(std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign > 150 || gradeToExec > 150)
		throw(Form::GradeTooHighException());
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw(Form::GradeTooLowException());
	else
	{
		_isSigned = false;
		std::cout << "Full copy constructor called!\n";
	}
}

Form& Form::operator=(Form const& src)
{
	if (this == &src)
		return *this;
	this->_isSigned = src.getSignedStatus();

	return *this;
}

Form::~Form()
{
	std::cout << "Form destructor called!\n";
}

std::ostream& operator<<(std::ostream& os, Form const& src)
{
	return os << "\033[1;31mForm details:\nName:\t\t" << src.getName() << std::endl
			<< "Signed status:\t" <<  src.getSignedStatus() << std::endl
			<< "Grade to sign:\t" << src.getGradeToSign() << std::endl
			<< "Grade to exec:\t" << src.getGradeToExec() << "\033[0m" << std::endl;
}

std::string Form::getName() const
{
	return this->_name;
}

bool	Form::getSignedStatus() const
{
	return this->_isSigned;
}

int Form::getGradeToSign() const
{
	return this->_gradeToSign;
}

int Form::getGradeToExec() const
{
	return this->_gradeToExec;
}

void Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw (Form::GradeTooLowException());
	this->_isSigned = true;
}

/* EXCEPTIONS */

const char* Form::Exception::what() const throw()
{
	return ("Form Exception!");
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("The grade is too high!");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("The grade is too low!");
}

const char* Form::UnsignedFormException::what() const throw()
{
	return ("Unsigned form cannot be executed!");
}