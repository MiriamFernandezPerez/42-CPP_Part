#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <string>

class Cat : public Animal
{
	private:
		Brain* brain;

	public:
		//Default constructor
		Cat();

		//Copy constructor
		Cat(const Cat &other);

		//Copy assigment constructor
		Cat& operator=(const Cat &other);

		//Destructor
		~Cat();

		//Method
		void	makeSound() const;
		
		//Setters & getters
		void	setBrain(const Brain *brain);
		Brain*	getBrain() const;
};

#endif
