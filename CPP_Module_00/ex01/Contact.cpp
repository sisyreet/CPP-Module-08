#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{ 
}

void Contact::setFirstName(std::string &firstName)
{
	this->_firstName = firstName;
}

std::string Contact::getFirstName() const
{
	return this->_firstName;
}

void Contact::setLastName(std::string &lastName)
{
	this->_lastName = lastName;
}

std::string Contact::getLastName() const
{
	return this->_lastName;
}

void Contact::setNickname(std::string &nickname)
{
	this->_nickname = nickname;
}

std::string Contact::getNickname() const
{
	return this->_nickname;
}

void Contact::setPhone(std::string &phone)
{
	this->_phone = phone;
}

std::string Contact::getPhone() const
{
	return this->_phone;
}

void Contact::setDarkestSecret(std::string &darkestSecret)
{
	this->_darkestSecret = darkestSecret;
}

std::string Contact::getDarkestSecret() const
{
	return this->_darkestSecret;
}
