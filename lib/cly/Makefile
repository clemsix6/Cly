SRC = $(wildcard *.c)
OBJ = $(SRC:.c=.o)

CFLAGS = -W -Wall -Werror -Wextra -I../../include
TARGET = libcly.a

all: $(TARGET)

$(TARGET): $(OBJ)
	ar rc $(TARGET) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TARGET)

re : fclean all