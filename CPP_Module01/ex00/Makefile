CC = c++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -fsanitize=leak -g

LDFLAGS = -fsanitize=address 

INC = -I./inc

SRC = src/main.cpp src/newZombie.cpp src/randomChump.cpp src/Zombie.cpp 

OBJ = $(SRC:.cpp=.o)

NAME = zombie

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

src/%.o: src/%.cpp inc/Zombie.hpp Makefile
	$(CC) $(CPPFLAGS) $(INC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
