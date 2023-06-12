SRC = ./main.cpp
OBJ = $(SRC:.cpp=.o)

CC = clang++
CPPFLAGS += -Wall -Werror -Wextra

NAME = santa

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all