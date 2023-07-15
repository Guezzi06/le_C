# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aguezzi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/01 16:49:32 by aguezzi           #+#    #+#              #
#    Updated: 2022/08/03 17:05:27 by aguezzi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= do-op

SRCS	= atoi.c do-op.c operations.c putnbr.c

CC		= gcc

FLAGS	= -Wall -Wextra -Werror

RM		= rm -f

OBJS	= ${SRCS:.c=.o}

.c.o:
		${CC} ${FLAGS} -I includes/ -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			${CC} -o ${NAME} ${OBJS}

all:	${NAME}

clean:
		${RM} ${OBJS}

fclean:	clean
		${RM} ${NAME}

re:		fclean all

.PHONY:	all clean fclean re
