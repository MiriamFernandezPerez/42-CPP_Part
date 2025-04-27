#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

#include <iostream>

int	main()
{
	//Animal a;

	Dog *d = new Dog();
	Cat *c = new Cat();

	delete d;
	delete c;

	return (0);
}
