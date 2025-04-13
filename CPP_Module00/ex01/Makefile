CC = g++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
INC = -I./inc
SRC = src/main.cpp src/Contact.cpp src/Phonebook.cpp src/Utils.cpp
OBJ = $(SRC:.cpp=.o)

NAME = phonebook

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

src/%.o: src/%.cpp inc/Contact.hpp inc/Phonebook.hpp Makefile
	$(CC) $(CPPFLAGS) $(INC) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)