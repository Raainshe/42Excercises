# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rmakoni <rmakoni@student.42heilbronn.de    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/17 17:51:07 by tbylund           #+#    #+#              #
#    Updated: 2024/08/18 14:40:31 by rmakoni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc # Compiler flags that moulinette uses/42.
CC_FLAGS = -Wall -Werror -Wextra
EXECUTABLE = Rush02 #Program/Executable name.
SRC_FILES = main.c basic_funtions.c read_file.c read_line.c validate.c# List of source files
OBJ_FILES = $(SRC_FILES:.c=.o)  # We convert our SOURCE files to OBJECT files.
# Default target: this is what runs when you just type `make`.
all: $(EXECUTABLE)

# Rule to create the executable from object files.
$(EXECUTABLE): $(OBJ_FILES)
	$(CC) $(CC_FLAGS) -o $(EXECUTABLE) $(OBJ_FILES)

# Rule to make sure to compile each .c file into a .o file.
%.o: %.c #ADD $(DEPENDENCIES) if we use HEADER files.This function is used so the "Make" only recompiles the files if something has been modified or updated.
	$(CC) $(CC_FLAGS) -c $< -o $@ 

#$< Is the source file representative and $@ is the object file representative.
# Clean up: remove object files and the executable file/program.
clean:
	rm -f $(OBJ_FILES) $(EXECUTABLE)

fclean: clean #This command calls "clean" function and also makes sure the program file is also removed/cleaned.
	rm -f $(EXECUTABLE)

re: fclean all #This command calls "fclean" to clean all files and then "all" to recompile everything again.

# Phony targets: these don't correspond to actual files.
.PHONY: all clean fclean re
