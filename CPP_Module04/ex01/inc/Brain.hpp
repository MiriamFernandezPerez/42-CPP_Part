#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain
{
	private:
		std::string ideas[100];
	
	public:
		//Default constructor
		Brain();

		//Copy constructor
		Brain(const Brain &other);

		//Copy assignment constructor1
		Brain& operator=(const Brain &other);

		//Destructor
		~Brain();

		//Setters & getters
		std::string	getIdea(int i) const;
		void		setIdea(int i, const std::string &idea);
};

#endif
