# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omadali <omadali@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/27 18:06:11 by omadali           #+#    #+#              #
#    Updated: 2024/10/29 22:56:40 by omadali          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRCS =	ft_printf.c \
		ft_hexadecimal.c \
		ft_putchar.c \
		ft_putnbr.c \
		ft_putstr.c \
		ft_adress.c \
		ft_putnbr_unsigned.c \

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