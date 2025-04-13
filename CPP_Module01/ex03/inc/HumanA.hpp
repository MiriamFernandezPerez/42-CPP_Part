#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <string>

class HumanA
{
    private:
        std::string name;
        Weapon& weapon;
    public:
        //Arguments a Refenence name and a reference weapon, HumanA always is armed
        HumanA(const std::string& name, Weapon& weapon);
        //Method to attack
        void attack() const;
};

#endif