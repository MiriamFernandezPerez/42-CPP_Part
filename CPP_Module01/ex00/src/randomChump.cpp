#include "../inc/Zombie.hpp"

// Create a Zombie on stack, make his announce and destroy it exiting out from this function
void    randomChump(std::string name)
{
    // Create the Zombie on stack
    Zombie  tempZombie(name);
    tempZombie.announce();
    // When program exit from this function the zombie is destroyed
}