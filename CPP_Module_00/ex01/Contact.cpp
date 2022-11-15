#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{ 
}

void Contact::setFirstName(string &firstName)
{
	this->_firstName = firstName;
}

string Contact::getFirstName()
{
	return this->_firstName;
}

void Contact::setLastName(string &lastName)
{
	this->_lastName = lastName;
}

string Contact::getLastName()
{
	return this->_lastName;
}

void Contact::setNickname(string &nickname)
{
	this->_nickname = nickname;
}

string Contact::getNickname()
{
	return this->_nickname;
}

void Contact::setPhone(string &phone)
{
	this->_phone = phone;
}

string Contact::getPhone()
{
	return this->_phone;
}

void Contact::setDarkestSecret(string &darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

string Contact::getDarkestSecret()
{
	return this->_darkestSecret;
}
