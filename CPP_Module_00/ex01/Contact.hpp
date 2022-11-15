#ifndef CONTACT_H
# define CONTACT_H
# include <string>

using namespace std;

class Contact {

    string _firstName;
    string _lastName;
    string _nickname;
    string _phone;
    string _darkestSecret;

public:
    Contact(void);
    ~Contact(void);
      
    void setFirstName(string &firstName);
    string getFirstName();
    void setLastName(string &lastName);
    string getLastName();
    void setNickname(string &nickname);
    string getNickname();
    void setPhone(string &phone);
    string getPhone();
    void setDarkestSecret(string &darkestSecret);  
    string getDarkestSecret();

};

#endif