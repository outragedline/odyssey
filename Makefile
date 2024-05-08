CC = gcc
FLAGS = -g  -o
SOURCE_FILES = ./src/main.c
EXECUTABLE = ./build/odyssey


main: $(SOURCE_FILES)
	@mkdir -p ./build
	$(CC) $(SOURCE_FILES) $(FLAGS) $(EXECUTABLE)

run: main
	./$(EXECUTABLE)
