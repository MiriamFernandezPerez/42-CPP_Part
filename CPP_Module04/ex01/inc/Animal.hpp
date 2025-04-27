#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>

class Animal
{
	protected:
		std::string type;
	
	public:
		//Default constructor
		Animal();

		//Copy constructor
		Animal(const Animal &other);
		
		//Copy assignment constructor
		Animal& operator=(const Animal &other);

		//Destructor
		virtual ~Animal();

		//Setters & getters
		void		setType(const std::string &type);
		std::string	getType() const;

		//Method
		virtual void makeSound();
};

#endif
