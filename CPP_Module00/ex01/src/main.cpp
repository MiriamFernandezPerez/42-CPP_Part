#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include "../inc/Phonebook.hpp"
#include "../inc/Utils.hpp"

int main()
{
    PhoneBook Phonebook;
    std::string command;

    while (true)
    {
        std::cout << "*************** PHONEBOOK MENU ***************\nADD - to create and add a contact to Phonebook\nSEARCH - to look for a contact\nEXIT - to close program\n***********************************************\nType your choice: ";
        
        // Read the command input
        if (!std::getline(std::cin, command))
        {
            // Check if Ctrl+D is detected
            if (std::cin.eof())
            {
                std::cout << "\nCtrl+D detected. Exiting program..." << std::endl;
                break;
            }
            // Check error of getline function or program
            else
            {
                std::cout << "\nError reading input. Exiting program..." << std::endl;
                break;
            }
        }

        if (command == "ADD")
        {
            std::string firstName, lastName, nickName, phoneNumber, darkestSecret;

            // Input validation for each field (not empty or ctrl+D)
            if (!getNonEmptyInput("Name: ", firstName)) continue;
            if (!getNonEmptyInput("Last Name: ", lastName)) continue;
            if (!getNonEmptyInput("Nickname: ", nickName)) continue;
            if (!getNonEmptyInput("Phone: ", phoneNumber)) continue;

            // Check valid phone number
            while (!isPhoneNumberValid(phoneNumber))
            {
                std::cout << "Invalid phone number. It must be only number and 9 digits. Please enter again." << std::endl;
                                    
                if (!getNonEmptyInput("Phone: ", phoneNumber))
                {
                    std::cin.clear();
                    //TODO investigar sobre el cin.ignore()
                    //std::cin.ignore(100);  
                    break;
                }
            }

            if (!getNonEmptyInput("Darkest secret: ", darkestSecret)) continue;
            // Create new contact if all fields are valid
            Contact* newContact = new Contact(firstName, lastName, nickName, phoneNumber, darkestSecret);
            // Add Contact to Phonebook
            Phonebook.addContact(newContact); 
            
        }
        else if (command == "SEARCH")
        {
            // Show contacts
            Phonebook.showContacts();
            std::cout << "Type index contact to show: ";
            // Get the input from method
            int index = Phonebook.getIndexInput();
            if (index != -1)
                Phonebook.showContactByIndex(index);
        }
        else if (command == "EXIT")
        {
            std::cout << "Program closing..." << std::endl;
            break;
        }
        else
            std::cout << "Command not found. Please type ADD, SEARCH, or EXIT." << std::endl << std::endl;
    }
    return 0;
}
