TEST_SRC = tests/cly_string/*.c \
			tests/cly_linked_list/*.c
APP_SRC = src/*.c
CFLAGS = -W -Wextra -Wall -I./include
LDFLAGS = -L./lib/cly -lcly
CRFLAGS = --coverage -lcriterion
TARGET = test


test : lib_make
	gcc -o $(TARGET) $(TEST_SRC) $(CFLAGS) $(LDFLAGS) $(CRFLAGS)
	./$(TARGET)
	gcovr

run : lib_make
	gcc -o $(TARGET) $(APP_SRC) $(CFLAGS) $(LDFLAGS)
	./$(TARGET)

lib_make:
	make -C lib/cly

clean :
	rm -f $(TARGET)
	rm -f *.gcda
	rm -f *.gcno
	make fclean -C lib/cly
