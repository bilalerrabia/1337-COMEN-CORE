CC = cc
FLAGS = -Wall -Wextra -Werror -I
NAME = libft.a
SRCS = ft_alpha.c ...
OBJS = ft_alpha.o ...
BONUS_OBJS = ft_lstsize.c ...

all:
	...
	ar src $(NAME) $(OBJS)


bonus:
	...
	ar scr $(NAME) $(BONUS_OBJS)


clean:
	rm -f *.o bonus_part/*.o


fclean: clean
	rm -f libft.a


re: fclean all

.PHONY: all clean fclean re bonus