#include "../inc/harlFilter.hpp"

void harlFilter::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void harlFilter::info(void)
{
    std::cout << "[ INFO ]" << std::endl
        << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void harlFilter::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl 
        << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void harlFilter::error(void)
{
    std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void harlFilter::complain(std::string level)
{
    // Array of pointers to members
    void (harlFilter::*complaints[])(void) = {&harlFilter::debug, &harlFilter::info, &harlFilter::warning, &harlFilter::error};
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    // Check level index 
    for (int i = 0; i < 4; i++)
    {
        if (level == levels[i]) {
            (this->*complaints[i])();
            return ;
        }
    }
}