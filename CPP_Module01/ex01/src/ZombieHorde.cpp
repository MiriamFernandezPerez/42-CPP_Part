#include "../inc/Zombie.hpp"
#include <new>

// Create a horde of zombies
Zombie* zombieHorde(int N, std::string name)
{
    // If there is no zombies, return nullptr
    if (N <= 0)
        return (NULL);  

    // Asign memory to N zombies
    Zombie* horde = new Zombie[N];  

    // Init all zombies with same name
    for (int i = 0; i < N; ++i)
    {
        // Init every zombie
        horde[i] = Zombie(name);  
    }

    // Return a pointer to the first zombie
    return (horde);  
}