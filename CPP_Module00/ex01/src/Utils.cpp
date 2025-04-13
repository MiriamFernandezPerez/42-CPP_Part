#include "utils.hpp"

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