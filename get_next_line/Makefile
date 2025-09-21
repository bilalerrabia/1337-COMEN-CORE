CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS = get_next_line.c get_next_line_utils.c
OBJS = get_next_line.o get_next_line_utils.o
SRCS_B = get_next_line_bonus.c get_next_line_utils_bonus.c
OBJS_B = get_next_line_bonus.o get_next_line_utils_bonus.o
MAIN = main.c
MAIN_OBJ = main.o
all:
	$(CC) -c $(CFLAGS) $(SRCS)
	$(CC) -c $(CFLAGS) $(MAIN)
	$(CC) $(CFLAGS) $(MAIN_OBJ) $(OBJS)
bonus:
	$(CC) -c $(CFLAGS) $(SRCS_B)
	$(CC) -c $(CFLAGS) $(MAIN)
	$(CC) $(CFLAGS) $(MAIN_OBJ) $(OBJS_B)

clean:
	rm -f $(OBJS) $(OBJS_B) $(MAIN_OBJ) a.out
re: clean all
.PHONY: re all clean clean