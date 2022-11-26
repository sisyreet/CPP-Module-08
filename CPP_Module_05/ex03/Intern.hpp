#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"

class AForm;

class Intern
{

public:

	Intern();
	Intern(Intern const& src);
	Intern& operator=(Intern const& src);
	~Intern();

	AForm* makeForm(std::string formName, std::string target) const;

	class InternException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

#endif