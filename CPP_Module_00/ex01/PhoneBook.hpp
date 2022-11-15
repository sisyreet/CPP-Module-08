#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
# include "Contact.hpp"

class Phonebook {
	
	Contact	_contacts[8];
	int		_filled;

public:

	Phonebook(void);
	~Phonebook(void);

	void	addContact(int index);
	void	searchContact(int index);
	void	setTotalContacts(int num);
	int		getTotalContacts(void);
	void	setFilled(int n);
	int		getFilled(void);
	Contact	getContact(int index);
	void	printField(string line);
	void	printChosenContact(int id);

};

#endif