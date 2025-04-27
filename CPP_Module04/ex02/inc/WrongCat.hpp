#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <string>

class WrongCat : public WrongAnimal
{	
	public:
		//Default constructor
		WrongCat();

		//Copy constructor
		WrongCat(const WrongCat &other);

		//Destructor
		~WrongCat();

		//Copy assigment constructor
		WrongCat& operator=(const WrongCat &other);

		//Method
		void	makeSound();
};

#endif

