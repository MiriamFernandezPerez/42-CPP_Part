CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -fsanitize=leak -g

LDFLAGS = -fsanitize=address 

INC = -I./inc

SRC = src/main.cpp src/Animal.cpp src/Dog.cpp src/Cat.cpp src/WrongAnimal.cpp src/WrongCat.cpp src/Brain.cpp

OBJ = $(SRC:.cpp=.o)

NAME = claptrap

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME) $(LDFLAGS)

src/%.o: src/%.cpp Makefile
	$(CC) $(CPPFLAGS) $(INC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re