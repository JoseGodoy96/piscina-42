# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: unlucky <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/16 19:11:41 by unlucky           #+#    #+#              #
#    Updated: 2025/03/16 19:38:59 by unlucky          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
CC              = gcc
RM              = rm -f
SRCS    = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c srcs/ft_swap.c
OBJS	= ${SRCS:.c=.o}
INCS	= includes
LIBC	= ar rc
LIBR	= ranlib
CFLAGS	= -Wall -Wextra -Werror -I${INCS}

.c.o:
	echo "Compiling $<"
	${CC} ${CFLAGS} -c $< -o $@

${NAME}: ${OBJS}
	echo "Creating library: ${NAME}"
	${LIBC} ${NAME} ${OBJS}
	${LIBR} ${NAME}

all: ${NAME}
libft.a: ${NAME}

clean:
	echo "Removing object files"
	${RM} ${OBJS}

fclean: clean
	echo "Removing library: ${NAME}"
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re libft.a .c.o
