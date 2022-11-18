#include <iostream>
#include "PhoneBook.hpp"

int	main(void)
{
	Phonebook	phonebook;
	std::string		cmd;
	int			i;

	phonebook.setFilled(0);
	while (1)
	{
		i = 0;
		while (i < 8)
		{
			std::cout << "TYPE COMMAND: ";
			std::cin >> cmd;
			if (!std::cin)
				return (1);
			if (cmd == "ADD")
			{
				phonebook.addContact(i);
				i++;
				continue;
			}
			else if (cmd == "SEARCH")
			{
				if (!phonebook.getFilled())
					phonebook.searchContact(i);
				else
					phonebook.searchContact(8);
			}
			else if (cmd == "EXIT")
				return 0;
			else
				continue;
		}
		phonebook.setFilled(1);
	}
	return 0;
}