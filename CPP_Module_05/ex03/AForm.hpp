#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>

#include "Bureaucrat.hpp"
#include "AForm.hpp"

class Bureaucrat;

class AForm
{
	const std::string	_name;
	bool				_isSigned;
	const int			_gradeToSign;
	const int			_gradeToExec;

public:

	AForm();
	AForm(AForm const& src);
	AForm(std::string name, int gradeToSign, int gradeToExec);
	AForm& operator=(AForm const& src);
	virtual ~AForm();

	virtual std::string	getName() const;
	bool				getSignedStatus() const;
	int					getGradeToSign() const;
	int					getGradeToExec() const;
	void				beSigned(Bureaucrat&);
	virtual void 		execute(Bureaucrat const & executor) const = 0;


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

	class UnsignedFormException : public Exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, AForm const& src);

#endif