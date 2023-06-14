CC = g++
CPPFLAGS += -Wall -Werror -Wextra

SRC_DIR = ./src
OBJ_DIR = ./obj
SRC = $(wildcard $(SRC_DIR)/*.cpp)
OBJ = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC))

TARGET_SRCS = $(wildcard ./*.cpp)
TARGET_OBJS = $(patsubst ./%.cpp,./%.o,$(TARGET_SRCS))

WRAPPINGCHAIN_NAME = wrapping-chain
SANTA_NAME = santa
TESTS_NAME = tests

ALL_TARGETS = $(WRAPPINGCHAIN_NAME) $(SANTA_NAME) $(TESTS_NAME)

.PHONY: all clean fclean re

all: $(ALL_TARGETS)

$(WRAPPINGCHAIN_NAME): $(WRAPPINGCHAIN_NAME).o $(OBJ)
	$(CC) -o $@ $^

$(SANTA_NAME): $(SANTA_NAME).o $(OBJ)
	$(CC) -o $@ $^

$(TESTS_NAME): $(TESTS_NAME).o $(OBJ)
	$(CC) -o $@ $^

./%.o: ./%.cpp
	$(CC) -c -o $@ $<

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CC) -c -o $@ $<

clean:
	rm -f $(OBJ) $(TARGET_OBJS)

fclean: clean
	rm -f $(ALL_TARGETS) $(wildcard ./*.xml)

re: fclean all