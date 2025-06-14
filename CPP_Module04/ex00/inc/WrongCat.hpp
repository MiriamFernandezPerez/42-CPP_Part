#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"
# include <string>

class WrongCat : public WrongAnimal
{	
	public:
		//Default constructor
		WrongCat();

		//Copy constuctor
		WrongCat(const WrongCat &other);
		
		//Copy assignment constructor
		WrongCat& operator=(const WrongCat &other);

		//Destructor
		~WrongCat();

		//Method
		void	makeSound();
};

#endif

