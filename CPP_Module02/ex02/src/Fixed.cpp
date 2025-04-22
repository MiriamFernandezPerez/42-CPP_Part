#include "../inc/Fixed.hpp"
#include <iostream>
#include <cmath>

//Call contructor
Fixed::Fixed() :_value(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

// Constructor from int
Fixed::Fixed(int const n)
{
	// Multiply by 256
	_value = n << _fractBits;    
    //std::cout << "Int constructor called" << std::endl;
}

// Constructor from float
Fixed::Fixed(float const f)
{
	// Multiply by 256 y round flour
   _value = roundf(f * (1 << _fractBits));
    //std::cout << "Float constructor called" << std::endl;
}


// Copy Constructor
Fixed::Fixed(const Fixed& value)
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = value;
}

// Operador de asignación
Fixed& Fixed::operator=(const Fixed& other)
{
	//std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
	{
		this->_value = other.getRawBits();
	}
	return (*this);
}

//Dedstructor
Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
}


//Getter getRawBits implementation return Fixed int value
int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
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

//Implementation comparation operators
bool	Fixed::operator>(const Fixed &other) const
{
	return (this->_value > other._value);
}

bool	Fixed::operator<(const Fixed &other) const
{
	return (this->_value < other._value);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return (this->_value >= other._value);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return (this->_value <= other._value);
}

bool	Fixed::operator==(const Fixed &other) const
{
	return (this->_value == other._value);
}

bool	Fixed::operator!=(const Fixed &other) const
{
	return (this->_value != other._value);
}


//Implementation artimetic opetators
Fixed Fixed::operator+(const Fixed &other) const
{
	return (Fixed(this->toFloat()) + other.toFloat());
}

Fixed Fixed::operator-(const Fixed &other) const
{
	return (Fixed(this->toFloat()) - other.toFloat());
}

Fixed Fixed::operator*(const Fixed &other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed &other) const
{
	if(other._value == 0)
	{
		std::cout << "Division by zero not possible!" << std::endl;
		return (Fixed(0));
	}
	return (Fixed(this->toFloat()) / other.toFloat());
}


//Implementation increment & decrement operators
//Pre-increment
Fixed& Fixed::operator++()
{
	this->_value += 1;
	return (*this);
}
//Post-increment. Save first the previous value to return it, and encrease the value before
Fixed Fixed::operator++(int)
{
	Fixed	tmp = *this;
	this->_value += 1;
	return (tmp);
}
//Pre-decrement
Fixed& Fixed::operator--()
{
	this->_value -= 1;
	return (*this);
}
//Post-decrement
Fixed Fixed::operator--(int)
{
	Fixed	tmp = *this;
	this->_value -= 1;
	return (tmp);
}


//Implementation static member functions min &max
Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}