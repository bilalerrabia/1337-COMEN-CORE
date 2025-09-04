CC = cc
CFLAGS = -Wall -Wextra -Werror -I bonus_part
NAME = libft.a
SRCS = $(wildcard ft_*.c)
OBJS = $(SRCS:.c=.o)

BONUS_SRCS = $(wildcard bonus_part/*.c)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	@ar rcs $(NAME) $(OBJS)

bonus: $(BONUS_OBJS) $(OBJS)
	@ar rcs $(NAME) $(BONUS_OBJS) $(OBJS)

%.o : %.c
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus