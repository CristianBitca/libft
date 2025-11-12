# Library name
NAME = libft.a

# Directory structure
SRCS_DIR = srcs
OBJ_DIR = obj
HEADER_DIR = include

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -I$(HEADER_DIR)
AR = ar rcs
RM = rm -rf

# Collect all .c files recursively
SRCS = $(shell find $(SRCS_DIR) -type f -name "*.c")

# Generate corresponding .o file paths in obj/ keeping directory structure
OBJS = $(SRCS:$(SRCS_DIR)/%.c=$(OBJ_DIR)/%.o)

# Default rule
all: $(NAME)

# Link all object files into the static library
$(NAME): $(OBJS)
	@echo "Archiving $(NAME)..."
	@$(AR) $(NAME) $(OBJS)
	@echo "$(NAME) created successfully!"

# Compile rule - mirrors directory structure in obj/
$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled: $<"

# Cleaning rules
clean:
	@$(RM) $(OBJ_DIR)
	@echo "Object files removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "Library removed."

re: fclean all

.PHONY: all clean fclean re