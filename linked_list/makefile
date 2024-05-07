# Compiler and flags
CC = gcc  # The C compiler to use
CFLAGS = -Wall -g  # Compiler flags: -Wall for warnings, -g for debugging
LDFLAGS =  # Linker flags (empty for now)

# Object files to create
OBJ = linked_list.o main.o

# Name of the executable
EXEC = my_program.out

# Default target to build the executable
all: $(EXEC)

# Rule to build the executable from object files
$(EXEC): $(OBJ)
	$(CC) $(LDFLAGS) $(OBJ) -o $(EXEC)  # Linking command

# Rule to compile individual source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@  # Compilation command

# Clean up build artifacts
clean:
	rm -f $(OBJ) $(EXEC)
