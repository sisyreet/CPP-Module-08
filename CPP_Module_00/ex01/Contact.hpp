#ifndef CONTACT_H
# define CONTACT_H
# include <string>

class Contact {

    std::string _firstName;
    std::string _lastName;
    std::string _nickname;
    std::string _phone;
    std::string _darkestSecret;

public:
    Contact(void);
    ~Contact(void);
      
    void setFirstName(std::string &firstName);
    std::string getFirstName() const;
    void setLastName(std::string &lastName);
    std::string getLastName() const;
    void setNickname(std::string &nickname);
    std::string getNickname() const;
    void setPhone(std::string &phone);
    std::string getPhone() const;
    void setDarkestSecret(std::string &darkestSecret);  
    std::string getDarkestSecret() const;

};

#endif