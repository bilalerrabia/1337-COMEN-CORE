CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_printf.c ft_printf_utils.c ft_printf_utils2.c
OBJS = ft_printf.o ft_printf_utils.o ft_printf_utils2.o
NAME = libftprintf.a
all:
	$(CC) -c $(CFLAGS) $(SRCS)
	ar rcs $(NAME) $(OBJS)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
.PHONY: re all fclean clean