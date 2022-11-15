#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
	std::string _target;

public:

	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & src);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const& src);
	~ShrubberyCreationForm();

	void execute(Bureaucrat const & executor) const;
	std::string	getTarget() const;
};



#endif

