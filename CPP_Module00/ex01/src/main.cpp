#include <iostream>
#include <string>
#include <sstream>
#include <cctype>
#include "../inc/Phonebook.hpp"

// Function to check if the phone number is valid (only digits and exactly 9 characters)
bool isPhoneNumberValid(const std::string& phoneNumber)
{
    // Check if phone number is not empty and has exactly 9 digits
    if (phoneNumber.length() != 9)
        return false;

    // Verify all chars are digits
    for (size_t i = 0; i < phoneNumber.length(); ++i)
    {
        if (!std::isdigit(phoneNumber[i]))
            return false;
    }

    return true;
}

// Function to get a non-empty input from the user
bool getNonEmptyInput(const std::string& prompt, std::string& input)
{
    // Always keep prompting until the input is valid
    while (true)
    {
        std::cout << prompt;
        std::getline(std::cin, input);

        // Check if Ctrl+D is detected (EOF)
        if (std::cin.eof())
        {
            std::cout << "\nCtrl+D detected. Exiting program..." << std::endl;
            return false;
        }

        // Check if input is empty
        if (input.empty())
        {
            std::cout << "Error: Input cannot be empty. Please enter a valid value." << std::endl;
            continue;
        }
        return true;
    }
}

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
            std::cout << "Contact added successfully!" << std::endl;
        }
        else if (command == "SEARCH")
        {
            // Show contacts
            Phonebook.showContacts();
            std::cout << "Type index contact to show: ";
            // Use a string to manage index
            std::string indexInput;
            // Read the input
            std::getline(std::cin, indexInput);

            // If input is empty, write error and ask again for the index
            if (indexInput.empty())
            {
                std::cout << "Error: You must enter a valid index." << std::endl;
                continue;
            }

            // Convert the input into a number using std::stringstream into index variable
            int index = -1;  // Invalid value by default to initialize
            std::stringstream ss(indexInput);
            ss >> index;

            // Verify if index is in range, if it's not ask again for the index
            if (index <= 0 || index > Phonebook.getContactCount())
            {
                std::cout << "Error: Index out of range." << std::endl;
                continue;
            }
            // Show selected contact
            Phonebook.showContactByIndex(index);
        }
        else if (command == "EXIT")
        {
            std::cout << "Program closing..." << std::endl;
            break;
        }
        else
        {
            std::cout << "Command not found. Please type ADD, SEARCH, or EXIT." << std::endl;
        }
    }
    return 0;
}
