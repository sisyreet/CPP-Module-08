#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H
# include "Contact.hpp"

class Contact;

class Phonebook {
	
	Contact	_contacts[8];
	int		_filled;

public:

	Phonebook(void);
	~Phonebook(void);

	void	addContact(int index);
	void	searchContact(int index);
	void	setTotalContacts(int num);
	int		getTotalContacts(void) const;
	void	setFilled(int n);
	int		getFilled(void) const;
	Contact	getContact(int index) const;
	void	printField(std::string line);
	void	printChosenContact(int id);

};

#endif