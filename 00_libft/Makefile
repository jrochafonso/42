# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jrocha-a <jrocha-a@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 17:03:59 by jrocha-a          #+#    #+#              #
#    Updated: 2021/11/29 22:38:16 by jrocha-a         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc -Wall -Wextra -Werror -g -I.
RM = rm -f
FLAGS = -Wall -Wextra -Werror -g -I.
SRCS =			ft_isalpha.c \
				ft_isascii.c \
				ft_isalnum.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_bzero.c \
				ft_memchr.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_memcmp.c \
				ft_strchr.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strlen.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_striteri.c \
				ft_strdup.c \
				ft_substr.c \
				ft_strmapi.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_atoi.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_strtrim.c \
				ft_itoa.c \
				ft_split.c \
				ft_calloc.c

BONUS =			ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstlast.c \
				ft_lstsize.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstclear.c \
				ft_lstmap.c

all:			$(NAME)

$(NAME):		$(SRCS:.c=.o)
				ar rc $(NAME) $(SRCS:.c=.o)
				ranlib $(NAME)

bonus: $(NAME)	$(BONUS:.c=.o)
				ar rc $(NAME) $(BONUS:.c=.o)
				ranlib $(NAME)

clean:
				$(RM)	$(SRCS:.c=.o) $(BONUS:.c=.o)
fclean: clean
				$(RM) $(NAME) $(BONUS:.c=.o)
re:	fclean 		$(NAME) $(BONUS:.c=.o)
n:
	norminette -R CheckForbiddenSourceHeader *.c
