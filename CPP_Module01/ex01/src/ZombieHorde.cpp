#include "../inc/Zombie.hpp"
#include <new>

// Create a horde of zombies
Zombie* zombieHorde(int n, std::string name)
{
    // If there is no zombies, return nullptr
    if (n <= 0)
        return (NULL);  

    // Asign memory to N zombies
    Zombie* horde = new Zombie[n];  

    // Init all zombies with same name
    for (int i = 0; i < n; ++i)
    {
        // Init every zombie
        horde[i] = Zombie(name);  
    }

    // Return a pointer to the first zombie
    return (horde);  
}