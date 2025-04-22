CC = g++                 # Compilador
CPPFLAGS = -Wall -Wextra -Werror -std=c++98  # Flags de compilación
INC = -I./inc             # Rutas de los archivos de cabecera
SRC = src/tests.cpp src/Account.cpp       # Archivos fuente
OBJ = $(SRC:.cpp=.o)      # Archivos objeto correspondientes

NAME = account            # Nombre del ejecutable

# Regla por defecto (compila el programa)
all: $(NAME)

# Regla para crear el ejecutable
$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

# Regla para compilar los archivos .cpp en .o
src/%.o: src/%.cpp inc/Account.hpp Makefile
	$(CC) $(CPPFLAGS) $(INC) -c $< -o $@

# Limpiar los archivos objeto generados
clean:
	rm -f $(OBJ)

# Limpiar los archivos objeto y el ejecutable
fclean: clean
	rm -f $(NAME)

# Regla para limpiar y luego recompilar todo
re: fclean $(NAME)
