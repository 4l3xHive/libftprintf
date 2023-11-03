CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = $(wildcard srcs/*.c srcs/formatHandlers/*.c)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^
	ranlib $@

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@ -Iincludes

bonus: $(BONUS_OBJ)
	ar rus $(NAME) $^
	ranlib $(NAME)

clean:
	rm -f $(OBJS) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: bonus all clean fclean re
