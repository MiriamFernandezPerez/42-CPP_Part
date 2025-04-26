#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string	type;

	public:
		// Constructor by default
		Animal();

		// Copy Constructor
		Animal(const Animal &other);

		// Copy assignment operator
		Animal& operator=(const Animal &other);

		// Virtual Destructor to bee an abstract class
		virtual ~Animal();

		std::string getType() const;
    	virtual void makeSound() const;
		
		//Setter to type
		void	setType(const std::string &type);
};

#endif