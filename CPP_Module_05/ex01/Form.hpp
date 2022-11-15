#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <ostream>
#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExec;

public:

	Form();
	Form(Form const& src);
	Form(std::string name, int gradeToSign, int gradeToExec);
	Form& operator=(Form const& src);
	~Form();

	std::string	getName() const;
	bool		getSignedStatus() const;
	int			getGradeToSign() const;
	int			getGradeToExec() const;
	void		beSigned(Bureaucrat&);

	class Exception : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooHighException : public Exception
	{	
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public Exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, Form const& src);

#endif