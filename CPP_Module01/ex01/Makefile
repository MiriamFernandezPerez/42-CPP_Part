CC = g++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -fsanitize=leak

LDFLAGS = -fsanitize=address 

INC = -I./inc

SRC = src/main.cpp src/Zombie.cpp src/zombieHorde.cpp

OBJ = $(SRC:.cpp=.o)

NAME = zombie_horde

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

src/%.o: src/%.cpp inc/Zombie.hpp
	$(CC) $(CPPFLAGS) $(INC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
