
SRCS_DIR    = srcs
OBJ_DIR     = obj
HEADER_DIR  = include

CC          = gcc
RM          = rm -rf
AR          = ar rcs
CFLAGS      = -Wall -Wextra -Werror -I $(HEADER_DIR)

NAME        = libft.a

SRCS        = $(wildcard $(SRCS_DIR)/*.c)
OBJS        = $(patsubst $(SRCS_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
