#include "../inc/FragTrap.hpp"

int main()
{
	FragTrap player("Pikachu");

	player.attack("Raichu");
	player.takeDamage(30);
	player.beRepaired(20);
	player.highFivesGuys();
	player.attack("Meowth");
	player.takeDamage(100);
	player.beRepaired(5);
	player.highFivesGuys();

	return (0);
}