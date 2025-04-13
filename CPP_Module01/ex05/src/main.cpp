#include "../inc/Harl.hpp"

int main()
{
    Harl h;

    // Check complaints at different levels
    h.complain("DEBUG");
    h.complain("INFO");
    h.complain("WARNING");
    h.complain("ERROR");
    // To see what happens if an invalid level is passed
    h.complain("INVALID"); 

    return 0;
}