#include "../inc/ClapTrap.hpp"

int main()
{
	ClapTrap player("Pikachu");

	player.attack("Raichu");
	player.takeDamage(4);
	player.beRepaired(3);
	player.attack("Meowth");
	player.takeDamage(10);
	player.beRepaired(5);

	return (0);
}