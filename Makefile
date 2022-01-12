SRC = tests/*.c
CFLAGS = -W -Wextra -Wall -I./include
LDFLAGS = -L./lib/cly -lcly --coverage -lcriterion
TARGET = test


run : lib_make
	gcc -o $(TARGET) $(SRC) $(CFLAGS) $(LDFLAGS)
	./$(TARGET)

lib_make:
	make -C lib/cly

clean :
	rm -f $(TARGET)
	make fclean -C lib/cly
