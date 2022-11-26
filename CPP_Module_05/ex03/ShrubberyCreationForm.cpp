#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default ShrubberyCreationForm", 145, 137)
{
	this->_target = "Default";
	std::cout << "ShrubberyCreationForm default construcutor called!\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Targer ShrubberyCreationForm", 145, 137)
{
	this->_target = target;
	std::cout << "Targer ShrubberyCreationForm construcutor called!\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : AForm(src.getName(), src.getGradeToSign(), src.getGradeToExec())
{
	this->_target = src._target;
	std::cout << "ShrubberyCreationForm copy construcutor called!\n";
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& src)
{
	if (this == &src)
		return *this;
	this->_target = src._target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "ShrubberyCreationForm destrucutor called!\n";
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string fileName = this->_target + "_shrubbery";
	std::string tree = 
	"	                         vv\n"
	"                     vvv^^^^vvvvv\n"
	"                 vvvvvvvvv^^vvvvvv^^vvvvv\n"
	"        vvvvvvvvvvv^^^^^^^^^^^^^vvvvv^^^vvvvv\n"
	"    vvvvvvv^^^^^^^^^vvv^^^^^^^vvvvvvvvvvv^^^vvv\n"
	"  vvvv^^^^^^vvvvv^^^^^^^vv^^^^^^^vvvv^^^vvvvvv\n"
	" vv^^^^^^^^vvv^^^^^vv^^^^vvvvvvvvvvvv^^^^^^vv^\n"
	" vvv^^^^^vvvv^^^^^^vvvvv^^vvvvvvvvv^^^^^^vvvvv^\n"
	"  vvvvvvvvvv^^^v^^^vvvvvv^^vvvvvvvvvv^^^vvvvvvvvv\n"
	"   ^vv^^^vvvvvvv^^vvvvv^^^^^^^^vvvvvvvvv^^^^^^vvvvvv\n"
	"     ^vvvvvvvvv^^^^vvvvvv^^^^^^vvvvvvvv^^^vvvvvvvvvv^v\n"
	"        ^^^^^^vvvv^^vvvvv^vvvv^^^v^^^^^^vvvvvv^^^^vvvvv\n"
	" vvvv^^vvv^^^vvvvvvvvvv^vvvvv^vvvvvv^^^vvvvvvv^^vvvvv^\n"
	"vvv^vvvvv^^vvvvvvv^^vvvvvvv^^vvvvv^v##vvv^vvvv^^vvvvv^v\n"
	" ^vvvvvv^^vvvvvvvv^vv^vvv^^^^^^_____##^^^vvvvvvvv^^^^\n"
	"    ^^vvvvvvv^^vvvvvvvvvv^^^^/\\@@@@@@\\#vvvv^^^\n"
	"         ^^vvvvvv^^^^^^vvvvv/__\\@@@@@@\\^vvvv^v\n"
	"             ;^^vvvvvvvvvvv/____\\@@@@@@\\vvvvvvv\n"
	"             ;      \\_  ^\\|[  -:] ||--| | _/^^\n"
	"             ;        \\   |[   :] ||_/| |/\n"
	"             ;         \\ ||___:]______/\n"
	"             ;          \\   ;=; /\n"
	"             ;           |  ;=;|\n"
	"             ;          ()  ;=;|\n"
	"            (()          || ;=;|\n"
	"                        / / \\;=;\\\n";

	if (this->getSignedStatus() == false)
		throw(AForm::UnsignedFormException());
	else if (this->getGradeToExec() < executor.getGrade())
		throw(AForm::GradeTooLowException());
	else
	{
		std::ofstream ofs(fileName);
		if (!ofs.is_open())
		{
			std::cout << "Couln't create output file! :(\n";
			return;
		}
		ofs << tree;
	}
}

std::string ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}