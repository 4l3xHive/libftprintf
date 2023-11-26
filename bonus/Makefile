CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a

LIBFT_SRCS = $(wildcard libft/*.c)
LIBFT_OBJS = $(LIBFT_SRCS:.c=.o)
SRCS = $(wildcard mandatory/*.c)
OBJS = $(SRCS:.c=.o)
BONUS_SRCS = $(wildcard bonus/*.c)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)
BONUS_LINKED_FLAG = .bonuslinked


all: $(NAME)

$(NAME): $(OBJS)
	@rm -f $(NAME) $(BONUS_OBJS) $(BONUS_LINKED_FLAG) $(LIBFT_OBJS)
	@ar rcs $@ $^
	@ranlib $@
	@echo "\033[0;32m::MANDATORY::\033[0m"
	@ar -t  $@

%.o: %.c
	@gcc $(CFLAGS) -c $< -o $@ -Imandatory -Ibonus -Ilibft

bonus: $(BONUS_OBJS) $(LIBFT_OBJS)
	@if [ -f $(BONUS_LINKED_FLAG) ]; then \
		echo "make: Nothing to be done for bonus'."; \
	else \
		rm -f $(NAME) $(OBJS); \
	    ar rcs $(NAME) $^; \
		ranlib $(NAME); \
	    touch $(BONUS_LINKED_FLAG); \
		echo "\033[0;31m:::::BONUS:::::\033[0m"; \
		ar -t $(NAME); \
	fi

clean:
	@rm -f $(OBJS) $(BONUS_OBJS) $(BONUS_LINKED_FLAG) $(LIBFT_OBJS)

fclean: clean
	@rm -f $(NAME)

re: fclean $(NAME)

rebo: fclean bonus

.PHONY: bonus all clean fclean re rebo
