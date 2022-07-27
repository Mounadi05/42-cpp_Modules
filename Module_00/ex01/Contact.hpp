#ifndef CONTACT_HPP_
#define CONTACT_HPP_

#include <iostream>
class Contact{
    private :
        std::string FirstName;
        std::string LastName;
        std::string Nickname;
        std::string PhoneNumber;
        std::string DarkestSecret;
    public :
        std::string GetFirstName(void);
        void SetFirstName(std::string name);
        std::string GetLastName(void);
        void SetLastName(std::string name);
        std::string GetNickname(void);
        void SetNickname(std::string name);
        std::string GetPhoneNumber(void);
        void SetPhoneNumber(std::string name);
        std::string GetDarkestSecret(void);
        void SetDarkestSecret(std::string name);
};

#endif