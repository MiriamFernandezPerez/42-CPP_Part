#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include <string>

class Cat : public Animal
{	
	public:
		//Default constructor
		Cat();

		//Copy constuctor
		Cat(const Cat &other);

		//Copy assignment constructor
		Cat& operator=(const Cat &other);
		
		//Destructor
		~Cat();

		//Method
		void	makeSound();
};

#endif
