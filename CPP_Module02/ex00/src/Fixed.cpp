#include "../inc/Fixed.hpp"
#include <iostream>

//Call constructor
Fixed::Fixed() : _value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

//Copy value by 
Fixed::Fixed(const Fixed& value)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = value;
}

//Operator assignment
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->_value = other.getRawBits();
    }
    return (*this);
}

//destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

//getRawBits implementation return Fixed int value
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

//Setter serRawBits implementation
void Fixed::setRawBits(int const raw)
{
    this->_value = raw;
}