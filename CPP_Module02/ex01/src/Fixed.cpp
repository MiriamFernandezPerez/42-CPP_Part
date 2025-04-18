#include "../inc/Fixed.hpp"
#include <iostream>
#include <cmath>

//Call contructor
Fixed::Fixed() :_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

// Constructor from int
Fixed::Fixed(int const n)
{
	// Multiply by 256
	_value = n << _fractBits;    
    std::cout << "Int constructor called" << std::endl;
}

// Constructor from float
Fixed::Fixed(float const f)
{
	// Multiply by 256 y round flour
   _value = roundf(f * (1 << _fractBits));
    std::cout << "Float constructor called" << std::endl;
}


// Copy Constructor
Fixed::Fixed(const Fixed& value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = value;
}

// Operador de asignación
Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
	{
		this->_value = other.getRawBits();
	}
	return (*this);
}

//Dedstructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


//Getter getRawBits implementation return Fixed int value
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

/// Convert to float
float Fixed::toFloat() const {
	return static_cast<float>(_value) / (1 << _fractBits);
}

// Convert to int
int Fixed::toInt() const {
	return _value >> _fractBits;
}

//Implementation operator
std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
	out << value.toFloat();
	return out;
}