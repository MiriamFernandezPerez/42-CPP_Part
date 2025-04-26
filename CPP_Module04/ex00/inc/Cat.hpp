#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
	public:
		// Constructor by default
		Cat();

		// Copy Constructor
		Cat(const Cat &other);

		// Copy assignment operator
		Cat& operator=(const Cat &other);

		// Destructor
		~Cat();

		void makeSound() const;
};

#endif
