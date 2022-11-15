#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void somethingElse(void);

	public:
	
	Harl();
	~Harl();
	void complain(std::string level);
};

#endif