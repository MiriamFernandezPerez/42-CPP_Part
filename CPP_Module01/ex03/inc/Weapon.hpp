#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <string>

class Weapon
{
    private:
        std::string type;
    public:
        // Default Constructor
        Weapon();
        // Constructor
        Weapon(const std::string& type);
        // Destructor
        ~Weapon();

        const std::string& getType()const;
        void setType(const std::string& newType);

};

#endif