#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include <iostream>

//Default constructor
ScavTrap::ScavTrap() : ClapTrap("Default")
{
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap default constructor called to create" << getName() << std::endl;
}

//Constructor with name
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap with name constructor called to create " << getName() << std::endl;
}

//Copy constructor
ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    *this = other;
    std::cout << "ScavTrap copy constructor called to create " << getName() << std::endl;
}

//Operation constuctor
ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
        ClapTrap::operator = (other);
    std::cout << "ScavTrap operator called for " << getName() << std::endl;
    return (*this);
}

//Destructor
ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called for " << getName() << std::endl;
}

//Attack class overwrite atack from ClapTrap class
void    ScavTrap::attack(const std::string &target)
{
    if (getHitPoints() == 0 || getEnergyPoints() <= 0)
    {
        std::cout << "ScavTrap " << getName() << " can't attack: not enough energy or not enough hit points." << std::endl;
        return ;
    }
    //energyPoints--;
    setEnergyPoints(getEnergyPoints() - 1);
    std::cout << "ScavTrap " << getName() << " launches a special attack on " << target << " causing " << getAttackDamage() << " points of damage!" << std::endl;
}

//guardGate method
void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << getName() << " is in keeper mode" << std::endl;
}