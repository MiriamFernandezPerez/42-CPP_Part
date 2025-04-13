#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>

class   PhoneBook
{
    private:
        Contact* contacts[8];  // Contacts array
        int contactCount;      // Number of contacts

        // Function to validate phone number (only digits and 9 chars)
        bool    isPhoneNumberValid(const std::string& phoneNumber) const;
        bool    getInput(std::string& input, const std::string& prompt) const;

    public:
        // Constructor
        PhoneBook() : contactCount(0) {}

        // Destructor
        ~PhoneBook();

        // Methods
        void    getInputPrompt();
        void    addContact(Contact* contact);
        void    showContacts() const;
        void    showContactByIndex(int index) const;
        int     getIndexInput() const;
        bool    addNewContact();
        int     getContactCount() const { return contactCount; }
};

#endif
