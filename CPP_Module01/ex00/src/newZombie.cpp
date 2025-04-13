#include "../inc/Zombie.hpp"

// Create a zombie on heap and return it
Zombie* newZombie(std::string name)
{
    return new Zombie(name);
}