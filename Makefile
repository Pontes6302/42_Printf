# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sifreita <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/22 03:28:44 by sifreita          #+#    #+#              #
#    Updated: 2021/11/22 03:28:45 by sifreita         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = 
OBJS = ${SRCS:.c=.o}
INCS = ft_printf.h
NAME = libftprintf.a

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

all: ${NAME}

bonus: ${NAME} ${OBJS_B}
	ar rcs ${NAME} ${OBJS_B}

.c.o:
	gcc -Wall -Wextra -Werror -I ${INCS} -c $< -o ${<:c=o} 

clean:
	rm -rf ${OBJS} ${OBJS_B}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all bonus clean fclean re .c.o

