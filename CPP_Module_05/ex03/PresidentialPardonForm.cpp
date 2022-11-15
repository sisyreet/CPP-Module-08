#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Default PresidentialPardonForm", 25, 5)
{
	this->_target = "Default";
	std::cout << "PresidentialPardonForm default construcutor called!\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Targer PresidentialPardonForm", 25, 5)
{
	this->_target = target;
	std::cout << "Targer PresidentialPardonForm construcutor called!\n";
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & src) : Form(src.getName(), src.getGradeToSign(), src.getGradeToExec())
{
	this->_target = src._target;
	std::cout << "PresidentialPardonForm copy construcutor called!\n";
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& src)
{
	if (this == &src)
		return *this;
	this->_target = src._target;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destrucutor called!\n";
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignedStatus() == false)
		throw(Form::UnsignedFormException());
	else if (this->getGradeToExec() < executor.getGrade())
		throw(Form::GradeTooLowException());
	else
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox\n";
}

std::string PresidentialPardonForm::getTarget() const
{
	return this->_target;
}