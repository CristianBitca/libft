# =========================
# Project Configuration
# =========================

NAME        = libft.a

SRCS_DIR    = srcs
OBJ_DIR     = obj
HEADER_DIR  = include


# =========================
# Compiler & Tools
# =========================

CC          = gcc
CFLAGS      = -Wall -Wextra -Werror -I$(HEADER_DIR)
AR          = ar rcs
RM          = rm -rf


# =========================
# Sources & Objects
# =========================

# Collect all .c files recursively
SRCS        = $(shell find $(SRCS_DIR) -type f -name "*.c")

# Generate corresponding .o file paths in obj/ keeping directory structure
OBJS        = $(SRCS:$(SRCS_DIR)/%.c=$(OBJ_DIR)/%.o)


# =========================
# Rules
# =========================

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Archiving $(NAME)..."
	@$(AR) $(NAME) $(OBJS)
	@echo "✅ $(NAME) created successfully!"

$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.c
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Compiled: $<"


# =========================
# Cleaning
# =========================

clean:
	@$(RM) $(OBJ_DIR)
	@echo "🧹 Object files removed."

fclean: clean
	@$(RM) $(NAME)
	@echo "🗑️  Library removed."

re: fclean all


# =========================
# Phony Targets
# =========================

.PHONY: all clean fclean re
