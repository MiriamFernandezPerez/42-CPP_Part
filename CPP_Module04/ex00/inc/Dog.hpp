#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include <string>

class Dog : public Animal
{	
	public:
		//Default constructor
		Dog();

		//Copy constuctor
		Dog(const Dog &other);
		
		//Copy assignment constructor
		Dog& operator=(const Dog &other);

		//Destructor
		~Dog();
		
		//Method
		void	makeSound();
};

#endif
