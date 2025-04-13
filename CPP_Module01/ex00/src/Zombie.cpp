#include "../inc/Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name) : name(name) {}

// Destructor
Zombie::~Zombie() {
    std::cout << name << " has been destroyed!" << std::endl;
}

// Method to announce the zombie
void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}