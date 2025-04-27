#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>

class WrongAnimal
{
	protected:
		std::string type;
	
	public:
		//Default constructor
		WrongAnimal();

		//Copy constructor
		WrongAnimal(const WrongAnimal &other);

		//Destructor
		virtual ~WrongAnimal();

		//Copy assigment constructor
		WrongAnimal& operator=(const WrongAnimal &other);

		//Setters & getters
		void		setType(const std::string &type);
		std::string	getType() const;

		//Method
		void makeSound();
};

#endif
