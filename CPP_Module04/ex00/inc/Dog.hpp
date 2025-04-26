#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
	public:
		// Constructor by default
		Dog();

		// Copy Constructor
		Dog(const Dog &other);

		// Copy assignment operator
		Dog& operator=(const Dog &other);

		// Destructor
		~Dog();

		void makeSound() const;
};

#endif
