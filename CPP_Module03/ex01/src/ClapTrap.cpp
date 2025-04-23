#include "../inc/ClapTrap.hpp"
#include <iostream>

// Default constructor
ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Default constructor called for " << name << std::endl;
}

// Constructor with name
ClapTrap::ClapTrap(const std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Constructor called for " << name << std::endl;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
	std::cout << "Copy constructor called for " << name << std::endl;
}

// Copy assignment operator
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other) {
		name = other.name;
		hitPoints = other.hitPoints;
		energyPoints = other.energyPoints;
		attackDamage = other.attackDamage;
	}
	std::cout << "Copy assignment operator called for " << name << std::endl;
	return (*this);
}

// Destructor
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for " << name << std::endl;
}

// Attack function
void ClapTrap::attack(const std::string& target)
{
	if (hitPoints <= 0 || energyPoints <= 0) {
		std::cout << "ClapTrap " << name << " can't attack: not enough energy or hit points.\n";
		return;
	}
	energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target
			  << ", causing " << attackDamage << " points of damage!\n";
}

// Take damage function
void ClapTrap::takeDamage(unsigned int amount)
{
	hitPoints -= amount;
	if (hitPoints < 0) hitPoints = 0;
	std::cout << "ClapTrap " << name << " takes " << amount
			  << " points of damage. Remaining HP: " << hitPoints << "\n";
}

// Be repaired function
void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints <= 0 || energyPoints <= 0)
	{
		std::cout << "ClapTrap " << name << " can't repair: not enough energy or hit points.\n";
		return ;
	}
	energyPoints--;
	hitPoints += amount;
	std::cout << "ClapTrap " << name << " repairs itself for " << amount
			  << " hit points. Current HP: " << hitPoints << "\n";
}

// Getters implementarion
std::string ClapTrap::getName() const
{
	return (name);
}

int	ClapTrap::getHitPoints() const
{
	return (hitPoints);
}

int	ClapTrap::getEnergyPoints() const
{
	return (energyPoints);
}

int	ClapTrap::getAttackDamage() const
{
	return (attackDamage);
}

// Setters implementarion
void ClapTrap::setName(const std::string& newName)
{
	name = newName;
}

void	ClapTrap::setHitPoints(int newHitPoints)
{
	hitPoints = newHitPoints;
}

void	ClapTrap::setEnergyPoints(int newEnergyPoints)
{
	energyPoints = newEnergyPoints;
}

void	ClapTrap::setAttackDamage(int newAttackDamage)
{
	attackDamage = newAttackDamage;
}