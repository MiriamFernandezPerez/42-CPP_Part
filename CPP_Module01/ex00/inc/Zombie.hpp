#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class   Zombie
{
    private:
        std::string name;
    public:
        // Constructor
        Zombie(std::string name);
        // Destructor
        ~Zombie();

        // Function to announce
        void announce(void);
};

// Create new zombie on heap
Zombie* newZombie(std::string name);
// Create temporal zombie on stack
void randomChump(std::string name);

#endif