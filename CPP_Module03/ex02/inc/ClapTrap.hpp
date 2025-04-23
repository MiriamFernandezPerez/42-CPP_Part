#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>

class ClapTrap
{
	private:
		// In value how represent a constant floating-point number
		std::string name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;
	
	public:
		// Constructor by default & with args
		ClapTrap();
		ClapTrap(const std::string name);

		// Copy Constructor
    	ClapTrap(const ClapTrap& other);

		// Copy assignment operator
    	ClapTrap& operator=(const ClapTrap& other);

		// Destructor
	    ~ClapTrap();

		//Methods in subject
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		// Getters to get private variables from private class
		std::string getName() const;
		int		getHitPoints() const;
		int		getEnergyPoints() const;
		int		getAttackDamage() const;

		// Setters
		void	setName(const std::string& newName);
		void	setHitPoints(int newHitPoints);
		void	setEnergyPoints(int newEnergyPoints);
		void	setAttackDamage(int newAttackDamage);
};

#endif