#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <string>

class ScavTrap : public ClapTrap
{
    public:
        // Constructor by default & with args
        ScavTrap();
        ScavTrap(const std::string name);

        //Copy constructor 
        ScavTrap(const ScavTrap &other);

        //Operation constructor
        ScavTrap& operator=(const ScavTrap &other);

        //Destructor
        ~ScavTrap();

        //Methods
        void    attack(const std::string &target);
        void    guardGate();
};

#endif