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

		//Copy assigment constructor
		Dog& operator=(const Dog &other);

		//Destructor
		~Dog();

		//Method
		void	makeSound() const;

		//Setters & getters
		void	setBrain(const Brain *brain);
		Brain*	getBrain() const;
};

#endif
