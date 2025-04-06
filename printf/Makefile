# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbitca <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/01/06 19:30:26 by cbitca            #+#    #+#              #
#    Updated: 2025/01/06 19:30:28 by cbitca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Directories
SRCS_DIR    = srcs
OBJ_DIR     = obj
HEADER_DIR  = include

# Tools and Flags
CC          = gcc
RM          = rm -rf
CFLAGS      = -Wall -Wextra -Werror -I $(HEADER_DIR)
AR          = ar rcs

# Output
NAME        = printf.a
BINARY      = out

# Sources and Objects
SRCS        = $(wildcard $(SRCS_DIR)/*.c)
OBJS        = $(patsubst $(SRCS_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRCS))

# Rules
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRCS_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_DIR)

fclean: clean
	$(RM) $(BINARY) $(NAME)

re: fclean all

.PHONY: all clean fclean re
