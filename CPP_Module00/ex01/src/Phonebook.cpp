#include "../inc/Phonebook.hpp"
#include "../inc/Contact.hpp"
#include <iostream>
#include <string>

//Constructor init
PhoneBook::PhoneBook() : contactCount(0) {}

// Destructor: clean memory (not required by recommended)
PhoneBook::~PhoneBook()
{
    for (int i = 0; i < contactCount; i++) {
        delete contacts[i];
    }
}

// Function to validate phone number
bool PhoneBook::isPhoneNumberValid(const std::string& phoneNumber) const
{
    // Phone number must have exactly 9 digits
    if (phoneNumber.length() != 9)
        return false;
    // If some char is not a digit number, return false and ask again
    for (size_t i = 0; i < phoneNumber.length(); ++i)
    {
        if (!std::isdigit(phoneNumber[i]))
            return (false);  
    }
    // if everything is ok return true
    return (true);  
}

// Method to show all the contacts
void PhoneBook::showContacts() const
{
    std::cout << " -------------------------------------------------" << std::endl;
    std::cout << "|   Index  |    Name    |  LastName  |  NickName  |" << std::endl;
    std::cout << " -------------------------------------------------" << std::endl;
    // Loop to show all the contacts in array
    for (int i = 0; i < contactCount; i++)
    {
        std::cout << "|        " << i + 1 << " | ";
        contacts[i]->showSummary(); 
    }
    std::cout << " -------------------------------------------------" << std::endl;
}

// Method to show an specific contact by index
void PhoneBook::showContactByIndex(int index) const
{
    if (index > 0 && index <= contactCount)
        contacts[index - 1]->showContact();
    else
        std::cout << "Index number " << index << " doesn't exist on PhoneBook" << std::endl;
}

// Function to get the input and verify empty fields or Ctrl+D
bool PhoneBook::getInput(std::string& input, const std::string& prompt) const
{
    // Loop to stay asking field still input is not empty or invalid
    while (true)
    {  
        std::cout << prompt;
        if (!std::getline(std::cin, input))
        {
            if (std::cin.eof())
            {
                std::cout << "\nCtrl+D detected. Exiting program." << std::endl;
                return false;
            }
            std::cout << "\nError reading input. Exiting program." << std::endl;
            return false;
        }

        // If input is empty, ask again
        if (input.empty())
        {
            std::cout << "Error: Input cannot be empty. Please enter a valid value." << std::endl;
            continue ;
        }
        return (true);
    }
}

// Metohd to add a new contact with input validation
bool PhoneBook::addNewContact()
{
    std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

    // Call to getInput in every prompt to check no empty fields
    if (!getInput(firstName, "Name: ")) return false;
    if (!getInput(lastName, "Last Name: ")) return false;
    if (!getInput(nickName, "Nickname: ")) return false;

    // Phone number validation
    while (true)
    {
        if (!getInput(phoneNumber, "Phone: ")) return false;
        if (!isPhoneNumberValid(phoneNumber))
            std::cout << "Invalid phone number. It must be 9 digits. Please enter again." << std::endl;
        else
            break ;
    }

    if (!getInput(darkestSecret, "Darkest secret: ")) return false;

    // Create a new contact with all verified values
    Contact* newContact = new Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
    // Add new contact to phonebook
    addContact(newContact);
    std::cout << "Contact added successfully!" << std::endl;
    return (true);
}

// Method to add a contact into array
void PhoneBook::addContact(Contact* contact)
{
    // If the quatity of contacts is less than 8 add normally
    if (contactCount < 8)
    {
        contacts[contactCount] = contact;
        contactCount++;
    }
    // If array is complete (8 contacts) replace the oldest by the new one
    else
    {
        // Circular buffer 
        // Calculating module can get index between 0 to 7
        int replaceIndex = contactCount % 8;
        // Delete the contact will be updated
        delete contacts[replaceIndex];
        // Add contact in right position
        contacts[replaceIndex] = contact;
    }
}