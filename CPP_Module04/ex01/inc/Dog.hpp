#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>

class Dog : public Animal
{
	private:
		Brain* brain;

	public:
		//Default constructor
		Dog();

		//Copy constructor
		Dog(const Dog &other);

		//Destructor
		~Dog();

		//Copy assignment constructor
		Dog& operator=(const Dog &other);

		//Method
		void	makeSound();

		//Setters & getters
		void	setBrain(const Brain *brain);
		Brain*	getBrain() const;
};

#endif
