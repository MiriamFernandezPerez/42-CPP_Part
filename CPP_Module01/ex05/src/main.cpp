#include "../inc/Harl.hpp"

int main()
{
    Harl harl;

    // Check complaints at different levels
    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    // To see what happens if an invalid level is passed
    harl.complain("INVALID"); 

    return (0);
}