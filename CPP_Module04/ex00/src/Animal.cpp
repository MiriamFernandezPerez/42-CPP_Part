#include "../inc/Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal &other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other)
		this->setType(other.getType());
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return (type);
}

void	Animal::setType(const std::string &type)
{
	this->type = type;
}

void Animal::makeSound() const
{
	std::cout << "Some generic animal sound..." << std::endl;
}
