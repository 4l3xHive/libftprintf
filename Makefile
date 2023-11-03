CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = $(wildcard srcs/*.c srcs/formatHandlers/*.c)
OBJS = $(SRCS:.c=.o)
BONUS_LINKED_FLAG = .bonuslinked
BONUS_SRCS = $(wildcard bsrcs/*.c)
BONUS_OBJS = $(wildcard bsrcs/*.c)

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^
	ranlib $@

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@ -Iincludes

bonus: $(BONUS_OBJ)
	@if [ -f $(BONUS_LINKED_FLAG) ]; then \
		echo "make: Nothing to be done for bonus'."; \
	else \
	    ar rus $(NAME) $^; \
	    ranlib $(NAME); \
	    touch $(BONUS_LINKED_FLAG); \
	fi

clean:
	rm -f $(OBJS) $(BONUS_OBJS) $(BONUS_LINKED_FLAG)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: bonus all clean fclean re
