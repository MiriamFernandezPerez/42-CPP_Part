#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
    public:
        // Constructor by default & with args
        FragTrap();
        FragTrap(const std::string name);

        //Copy constructor 
        FragTrap(const FragTrap &other);

        //Operation constructor
        FragTrap& operator=(const FragTrap &other);

        //Destructor
        ~FragTrap();

        //Methods
        void    highFivesGuys(void);
};

#endif