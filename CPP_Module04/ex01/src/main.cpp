#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/WrongCat.hpp"

#include <iostream>

int	main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Dog	*d = new Dog();
	Dog	h;

	d->getBrain()->setIdea(3, "bad idea!");
	
	std::cout << "d idea[3]: " << d->getBrain()->getIdea(3) << std::endl;
	std::cout << "h idea[3]: " << h.getBrain()->getIdea(3) << std::endl;

	h = *d;
	
	std::cout << "h idea[3]: " << h.getBrain()->getIdea(3) << std::endl;
	
	delete (j); //should not create a leak
	delete (i);
	delete (d);

	return (0);
}
