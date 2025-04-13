#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class HumanB
{
    private:
        std::string name;
        Weapon* weapon;
    
    public:
        //Arguments: Only refenence name, HumanB can be armed or not
        HumanB(const std::string& name);
        //Method to be armed
        void setWeapon(Weapon& weapon);
        //Method to attack
        void attack() const;
};

#endif