# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kbaridon <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/03 15:55:47 by kbaridon          #+#    #+#              #
#    Updated: 2024/09/03 15:55:49 by kbaridon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIB = libft.a
SRCDIR = src
INCDIR = includes

SRC =	srcs/ft_putchar.c \
	srcs/ft_putstr.c \
	srcs/ft_strcmp.c \
	srcs/ft_strlen.c \
	srcs/ft_swap.c

OBJS = ${SRC:.c=.o}

all: $(LIB)

$(LIB): $(OBJS)
	ar rcs $(LIB) $(OBJS)

.c.o:
	$(CC) $(CFLAGS) -I $(INCDIR) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(LIB)

re:	fclean all

.PHONY: all clean fclean re
