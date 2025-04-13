#include "../inc/Zombie.hpp"

int main()
{
    // Create a Zombie on heap with newZombie function
    Zombie* heapZombie = newZombie("HeapZombie");
    heapZombie->announce();

    // Create a Zombie on stack with randomChump function
    randomChump("StackZombie");

    // Free memory of Zombie on heap
    delete (heapZombie);

    return (0);
}