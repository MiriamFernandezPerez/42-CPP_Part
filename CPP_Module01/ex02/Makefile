CC = g++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -fsanitize=leak

LDFLAGS = -fsanitize=address 

INC = -I./inc

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

NAME = hi_this_brain

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
