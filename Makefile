CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRCS = $(wildcard mandatory/*.c)
OBJS = $(SRCS:.c=.o)
BONUS_SRCS = $(wildcard bonus/*.c)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)
BONUS_LINKED_FLAG = .bonuslinked

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $@ $^
	ranlib $@

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@ -Imandatory 

bonus: $(BONUS_OBJS)
	@if [ -f $(BONUS_LINKED_FLAG) ]; then \
		echo "make: Nothing to be done for bonus'."; \
	else \
	    ar rcs $(NAME) $^; \
	    ranlib $(NAME); \
	    touch $(BONUS_LINKED_FLAG); \
	fi

clean:
	rm -f $(OBJS) $(BONUS_OBJS) $(BONUS_LINKED_FLAG)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: bonus all clean fclean re
