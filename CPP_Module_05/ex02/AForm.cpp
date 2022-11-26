#include "AForm.hpp"

AForm::AForm() : _name("Unnamed AForm"), _isSigned(0), _gradeToSign(1), _gradeToExec(1)
{
	std::cout << "AForm default constructor called!\n";
}

AForm::AForm(AForm const& src) : _name(src._name), _isSigned(src._isSigned), _gradeToSign(src._gradeToSign), _gradeToExec(src._gradeToExec)
{
	std::cout << "AForm default constructor called!\n";
}

AForm::AForm(std::string name, int gradeToSign, int gradeToExec) : _name(name), _gradeToSign(gradeToSign), _gradeToExec(gradeToExec)
{
	if (gradeToSign > 150 || gradeToExec > 150)
		throw(AForm::GradeTooHighException());
	else if (gradeToSign < 1 || gradeToExec < 1)
		throw(AForm::GradeTooLowException());
	else
	{
		_isSigned = false;
		std::cout << "Full copy constructor called!\n";
	}
}

AForm& AForm::operator=(AForm const& src)
{
	if (this == &src)
		return *this;
	this->_isSigned = src.getSignedStatus();

	return *this;
}

AForm::~AForm()
{
	std::cout << "AForm destructor called!\n";
}

std::ostream& operator<<(std::ostream& os, AForm const& src)
{
	return os << "\033[1;31mAForm details:\nName:\t\t" << src.getName() << std::endl
			<< "Signed status:\t" <<  src.getSignedStatus() << std::endl
			<< "Grade to sign:\t" << src.getGradeToSign() << std::endl
			<< "Grade to exec:\t" << src.getGradeToExec() << "\033[0m" << std::endl;
}

std::string AForm::getName() const
{
	return this->_name;
}

bool	AForm::getSignedStatus() const
{
	return this->_isSigned;
}

int AForm::getGradeToSign() const
{
	return this->_gradeToSign;
}

int AForm::getGradeToExec() const
{
	return this->_gradeToExec;
}

void AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > this->getGradeToSign())
		throw (AForm::GradeTooLowException());
	this->_isSigned = true;
}

/* EXCEPTIONS */

const char* AForm::Exception::what() const throw()
{
	return ("AForm Exception!");
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("The grade is too high!");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("The grade is too low!");
}

const char* AForm::UnsignedFormException::what() const throw()
{
	return ("Unsigned AForm cannot be executed!");
}