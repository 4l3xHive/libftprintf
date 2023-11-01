CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
FORMATSRCS = $(wildcard formatHandlers/*.c)
SRCS = $(wildcard srcs/*.c)
FORMATOBJS = $(FORMATSRCS:.c=.o)
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS) $(FORMATOBJS)
	ar rcs $@ $^
	ranlib $@

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@ -Iincludes

bonus: $(BONUS_OBJ)
	ar rus $(NAME) $^
	ranlib $(NAME)

clean:
	rm -f $(FORMATOBJS) $(OBJS) $(BONUS_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: bonus all clean fclean re
