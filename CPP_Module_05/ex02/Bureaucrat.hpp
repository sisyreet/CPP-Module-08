#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>

#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	const std::string	_name;
	int					_grade;

public:

	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const& src);
	Bureaucrat& operator=(Bureaucrat const& src);
	~Bureaucrat();


	std::string	getName() const;
	int			getGrade() const;
	void		incrementGrade();
	void		decrementGrade();
	void		signForm(AForm&);
	void		executeForm(AForm const & form);


	class Exception : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooHighException : public Bureaucrat::Exception
	{
		public:
			virtual const char* what() const throw();
	};

	class GradeTooLowException : public Bureaucrat::Exception
	{
		public:
			virtual const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, Bureaucrat const& src);

#endif