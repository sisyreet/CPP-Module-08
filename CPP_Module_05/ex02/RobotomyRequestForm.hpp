#ifndef ROBOTOMYREQUSTFORM_HPP
# define ROBOTOMYREQUSTFORM_HPP

#include <cstdlib>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	std::string _target;

public:

	RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const& src);
	RobotomyRequestForm& operator=(RobotomyRequestForm const& src);
	~RobotomyRequestForm();

	void execute(Bureaucrat const & executor) const;
	std::string	getTarget() const;
};



#endif