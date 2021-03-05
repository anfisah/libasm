# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccoto <ccoto@student.42lyon.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/01 10:44:04 by ccoto             #+#    #+#              #
#    Updated: 2021/03/05 14:38:57 by ccoto            ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ft_strlen.s ft_write.s ft_read.s ft_strcmp.s

OBJS = ${SRCS:.s=.o}

CC = nasm

FLAGS = -f macho64

RM = rm -f

.s.o:
			${CC} ${FLAGS} $< -o ${<:.s=.o}

${NAME}:	${OBJS}
			ar -rcs ${NAME} ${OBJS}

main:		${NAME}
			gcc main.c ${NAME}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean: 	clean
			${RM} ${NAME} a.out

re:			fclean all

.PHONY:     all clean fclean re