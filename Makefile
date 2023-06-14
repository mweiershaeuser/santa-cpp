CC = g++
CPPFLAGS += -Wall -Werror -Wextra

MAIN_SRC = ./main.cpp ./tests.cpp

SRC_DIR = ./src
OBJ_DIR = ./obj
SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ = $(patsubst ./%.cpp,$(OBJ_DIR)/%.o,$(MAIN_SRC)) $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC))

NAME = xmas

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $@ $^

$(OBJ_DIR)/%.o: ./%.cpp
	$(CC) -c -o $@ $<

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) -c -o $@ $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all