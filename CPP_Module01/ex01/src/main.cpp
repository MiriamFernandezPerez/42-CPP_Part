#include "../inc/Zombie.hpp"

int main()
{
    // Zombies quantity
    int N = 5;
    //Call to zombieHorde function
    Zombie* horde = zombieHorde(N, "Zombie");

    if (horde) {
        // All zombies announce his name
        for (int i = 0; i < N; ++i) {
            horde[i].announce();
        }

        // Liberamos la memoria después de usarlos
        delete[] horde;
    }

    return 0;
}