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

SRCS			=	ft_printf.c ft_printf_utils.c ft_putpointer.c ft_itoa.c ft_unsigneditoa.c ft_calloc.c

OBJS			= $(SRCS:.c=.o)

CC			= gcc
RM			= rm -rf
CFLAGS			= -Wall -Wextra -Werror -I.
AR			= ar rcs

NAME			= libftprintf.a
BINARY			= out

all:			$(NAME)

$(NAME):		$(OBJS)
				$(AR) $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS)

fclean:			clean
				$(RM) $(BINARY) $(NAME)

re:			fclean $(NAME)

.PHONY:			all clean fclean re