#include "../inc/Contact.hpp"

// Show all the details of the Contact
void Contact::showContact() const
{
    std::cout << "Name: " << firstName << std::endl;
    std::cout << "Last Name: " << lastName << std::endl;
    std::cout << "NickName: " << nickName << std::endl;
    std::cout << "Phone: " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}

// Show summary list of Contacts (limited to 10 chars by field with substr function + a dot at final)
void Contact::showSummary() const
{
    std::string firstNameFormatted = (firstName.length() > 9) ? firstName.substr(0, 9) + "." : firstName;
    std::string lastNameFormatted = (lastName.length() > 9) ? lastName.substr(0, 9) + "." : lastName;
    std::string nickNameFormatted = (nickName.length() > 9) ? nickName.substr(0, 9) + "." : nickName;
    std::cout << std::setw(10) << std::right << firstNameFormatted << " | "
              << std::setw(10) << std::right << lastNameFormatted << " | "
              << std::setw(10) << std::right << nickNameFormatted << " |" << std::endl;
}
