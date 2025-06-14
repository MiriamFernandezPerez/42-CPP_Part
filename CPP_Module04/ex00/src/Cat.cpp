#include "../inc/Cat.hpp"
#include <iostream>

Cat::Cat()
{
	setType("Cat");
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=(const Cat &other)
{
	if (this != &other)
	{
		this->setType(other.getType());
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound()
{
	std::cout << "Meow Meow!!" << std::endl;
}
