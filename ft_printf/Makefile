NAME = ft_printf.a

CC = GCC

FLAGS = -Wall -Wextra -Werror

SOURCES = ft_printf \
			ft_hexdecimal \

OBJS = $(SOURCES: .c=.o)

$(NAME): $(OBJS)
	$(CC) -c $(FLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)

%.o : %.c
	$(CC) $(FLAGS) -C $< -O $@
all : $(NAME)

clean:
	rm -f $(OBJS)
	
fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re