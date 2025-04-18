#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:
		// In value how represent a constant floating-point number
		int	_value;
		static const int _fractBits = 8;
	
	public:
		// Constructor by default
		Fixed();

		// Copy Constructor
    	Fixed(const Fixed& other);

		// Copy assignment operator
    	Fixed& operator=(const Fixed& other);

		// Destructor
	    ~Fixed();

		//A member function int getRawBits( void ) const; that returns the raw value of the fixed-point value.
		int getRawBits(void) const;

		// A member function void setRawBits( int const raw ); that sets the raw value of the fixed-point number.
		void setRawBits(int const raw);

};

#endif