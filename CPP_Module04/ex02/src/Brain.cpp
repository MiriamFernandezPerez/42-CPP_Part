#include "../inc/Brain.hpp"
#include <iostream>

//Constructor implementation
Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

//Copy constructor  implementation
Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain copy constructor called" << std::endl;
}

//Operator  implementation
Brain& Brain::operator=(const Brain &other)
{
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = other.ideas[i];
		}
	}

	return (*this);
}

//Destructor implementation
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}


void	Brain::setIdea(int i, const std::string &idea)
{
	this->ideas[i] = idea;
}

std::string	Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}
