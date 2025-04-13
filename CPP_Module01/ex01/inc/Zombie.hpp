#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class   Zombie
{
    private:
        std::string name;
    public:
        // Default Constructor
        Zombie();
        // Constructor
        Zombie(std::string name);
        // Destructor
        ~Zombie();

        // Function to announce
        void    announce(void);
};
// Function tocreate zombie horde
Zombie* zombieHorde(int N, std::string name);

#endif