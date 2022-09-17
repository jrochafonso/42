# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/27 14:30:55 by jrocha-a          #+#    #+#              #
#    Updated: 2022/06/01 20:35:50 by jrocha-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

INC = includes
SRCS =	./ft_ibase.c \
		./ft_mbase.c \
		./ft_putchar.c \
		./ft_putstr.c \
		./ft_strlen.c \
		./ft_utilities.c \
		./ft_printf.c
OBJS = ${SRCS:.c=.o}
CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I ${INC}
RCS = ar -rcs
RAN = ranlib

all:    ${NAME}

${NAME}:    ${OBJS}
	${RCS}  ${NAME} ${OBJS}
	${RAN}  ${NAME}

comp:
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $(<:.c=.o)

clean:
	${RM} ${OBJS}

fclean: clean
	${RM}   ${NAME}

re: fclean all

norm:
	norminette -R CheckForbiddenSourceHeader *.c
	norminette -R CheckDefine *.h
