#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class   Contact
{
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string phoneNumber;
        std::string darkestSecret;

    public:
        // Constructor
        Contact(std::string fName, std::string lName, std::string nName, std::string pNumber, std::string dSecret)
            : firstName(fName), lastName(lName), nickName(nName), phoneNumber(pNumber), darkestSecret(dSecret) {}

        // Methods to show contact info
        void    showContact() const;
        void    showSummary() const;
};

#endif
