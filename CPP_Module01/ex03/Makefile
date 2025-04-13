CC = g++

CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -fsanitize=leak
LDFLAGS = -fsanitize=address 
INC = -I./inc

SRC = src/main.cpp src/Weapon.cpp src/HumanA.cpp src/HumanB.cpp
OBJ = $(SRC:.cpp=.o)

NAME = violence

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME) $(LDFLAGS)

src/%.o: src/%.cpp
	$(CC) $(CPPFLAGS) $(INC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re