# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cbitca <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/04/06 17:41:58 by cbitca            #+#    #+#              #
#    Updated: 2025/04/06 17:41:59 by cbitca           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS_DIR    = srcs
OBJ_DIR     = obj
HEADER_DIR  = include

CC          = gcc
RM          = rm -rf
CFLAGS      = -Wall -Wextra -Werror -I $(HEADER_DIR)
AR          = ar rcs

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

