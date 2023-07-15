# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/27 12:30:17 by aguezzi           #+#    #+#              #
#    Updated: 2022/07/28 16:25:35 by aguezzi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

SRCS	= srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

OBJS	= ${SRCS:.c=.o}

RM		= rm -f

all:	${NAME}

.c.o:
		${CC} ${FLAGS} -I includes/ -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
		ar -rc ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
