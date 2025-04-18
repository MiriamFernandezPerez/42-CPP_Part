#include "../inc/HarlFilter.hpp"

int getLevelCode(const std::string& level)
{
    if (level == "DEBUG") return 0;
    if (level == "INFO") return 1;
    if (level == "WARNING") return 2;
    if (level == "ERROR") return 3;
    // If level is not reconized
    return (-1);
}

int main(int ac, char **av)
{
    HarlFilter harl;
   
    if (ac != 2)
    {
        std::cout << "Unknown level!, please type level you want to listen" << std::endl << "Levels availables:" << std::endl
        << "DEBUG" << std::endl << "INFO" << std::endl << "WARNING" << std::endl << "ERROR" << std::endl;
        return (1);
    }
    std::string level = av[1];
    // Check complaints at different levels
        switch (getLevelCode(level)) {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[  Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
    return (0);
}