# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/27 18:06:11 by omadali           #+#    #+#              #
#    Updated: 2024/10/27 18:18:27 by omadali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRCS =	ft_printf.c \
		ft_hexadecimal.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \

OBJS = $(SRCS:.c=.o)

CC = cc

all:$(NAME)

$(NAME): $(OBJS)
	$(CC) -c $(FLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re