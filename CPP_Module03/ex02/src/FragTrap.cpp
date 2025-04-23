#include "../inc/ClapTrap.hpp"
#include "../inc/FragTrap.hpp"
#include <iostream>

//Default constructor
FragTrap::FragTrap() : ClapTrap("Default FragTrap")
{
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap default constructor for" << getName() << std::endl;
}

//Constructor with name
FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap constructor for" << getName() << std::endl;
}

//Copy constructor
FragTrap::FragTrap(const FragTrap &other) : ClapTrap (other)
{
    *this = other;
    std::cout << "FragTrap copy constructor for " << getName() << std::endl;
}

//Assingment constructor
FragTrap& FragTrap::operator=(const FragTrap& other)
{
    if (this != &other)
        ClapTrap::operator=(other);
    std::cout << "FragTrap assigment opeator for " << getName() << std::endl;
    return (*this);
}

//Destructor
FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor for " << getName() << std::endl;
}

void    FragTrap::highFivesGuys(void)
{
    std::cout << "FragTrap " << getName() << " request a high five ✋" << std::endl;
}