CFLAGS = -Wall -Wextra -Werror -I includes
SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)
NAME = push_swap

all: $(OBJS)
	gcc $(OBJS) -o $(NAME)
clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)
re: fclean all