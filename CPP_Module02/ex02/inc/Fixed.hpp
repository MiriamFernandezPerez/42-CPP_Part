#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream> 

class Fixed
{
    private:
		// In value how represent a constant floating-point number
        int _value;   
		// 8 bits
        static const int _fractBits = 8;

    public:
        // Constructor by default
        Fixed();

        // Constructor from int
        Fixed(int const n);

        // Constructor from float
        Fixed(float const f);

        // Copy constructor
		Fixed(const Fixed& other);

        // Copy assingment operator
        Fixed &operator=(const Fixed &other);

        // Destructor
        ~Fixed();

        // Returns the raw integer value (_value)
        int getRawBits() const;

        // Sets the raw value (_value)
        void setRawBits(int const raw);

        // Convert the fixed value to a float (divide by 256)
        float toFloat() const;

        // Convert the fixed value to an integer (divide by 256 without decimals)
        int toInt() const;

		//Compatarion operators
		bool	operator>(const Fixed &other) const;
		bool	operator<(const Fixed &other) const;
		bool	operator>=(const Fixed &other) const;
		bool	operator<=(const Fixed &other) const;
		bool	operator==(const Fixed &other) const;
		bool	operator!=(const Fixed &other) const;

		//Aritmetic operators
		Fixed	operator+(const Fixed &other) const;
		Fixed	operator-(const Fixed &other) const;
		Fixed	operator*(const Fixed &other) const;
		Fixed	operator/(const Fixed &other) const;

		//Increment and decrement operators
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);

		//Statics member functions min & max
		static Fixed& min(Fixed &a, Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
		static Fixed& max(Fixed &a, Fixed &b);
		static const Fixed& max(const Fixed &a, const Fixed &b);

};

// Overloading the << operator to display the number as a float
std::ostream &operator<<(std::ostream &out, const Fixed &value);

#endif
