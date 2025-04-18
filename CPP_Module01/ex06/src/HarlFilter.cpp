#include "../inc/HarlFilter.hpp"

void HarlFilter::debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void HarlFilter::info(void)
{
    std::cout << "[ INFO ]" << std::endl
        << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void HarlFilter::warning(void)
{
    std::cout << "[ WARNING ]" << std::endl 
        << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void HarlFilter::error(void)
{
    std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void HarlFilter::complain(std::string level)
{
    // Array of pointers to members
    void (HarlFilter::*complaints[])(void) = {&HarlFilter::debug, &HarlFilter::info, &HarlFilter::warning, &HarlFilter::error};
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