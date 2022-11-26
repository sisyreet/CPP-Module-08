#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("Default RobotomyRequestForm", 72, 45)
{
	this->_target = "Default";
	std::cout << "RobotomyRequestForm default construcutor called!\n";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Targer RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	std::cout << "Targer RobotomyRequestForm construcutor called!\n";
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src) : AForm(src.getName(), src.getGradeToSign(), src.getGradeToExec())
{
	this->_target = src._target;
	std::cout << "RobotomyRequestForm copy construcutor called!\n";
}

RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& src)
{
	if (this == &src)
		return *this;
	this->_target = src._target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "RobotomyRequestForm destrucutor called!\n";
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	int condition = std::rand() % 2;

	if (this->getSignedStatus() == false)
		throw(AForm::UnsignedFormException());
	else if (this->getGradeToExec() < executor.getGrade())
		throw(AForm::GradeTooLowException());
	else
	{
		std::cout << "Makes some drilling noises...\n";
		if (condition)
			std::cout << this->_target << " has been robotomized!\n";
		else
			std::cout << this->_target << "'s robotomy failed...\n";
	}
}

std::string RobotomyRequestForm::getTarget() const
{
	return this->_target;
}