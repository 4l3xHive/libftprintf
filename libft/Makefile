CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
BONUS_LINKED_FLAG = .bonus_linked
SRCS_FILES = ft_memset \
		ft_bzero \
		ft_memcpy \
		ft_memmove \
		ft_memchr \
		ft_memcmp \
		ft_strlen \
		ft_strlcpy \
		ft_strlcat \
		ft_strchr \
		ft_strrchr \
		ft_strnstr \
		ft_strncmp \
		ft_atoi \
		ft_isalpha \
		ft_isdigit \
		ft_isalnum \
		ft_isascii \
		ft_isprint \
		ft_toupper \
		ft_tolower \
		ft_calloc \
		ft_strdup \
		ft_substr \
		ft_strjoin \
		ft_strtrim \
		ft_split \
		ft_itoa \
		ft_strmapi \
		ft_striteri \
		ft_putchar_fd \
		ft_putstr_fd \
		ft_putendl_fd \
		ft_putnbr_fd \

BONUS_FILES = 	ft_lstnew_bonus \
	  		ft_lstadd_front_bonus \
	  		ft_lstsize_bonus \
	  		ft_lstlast_bonus \
	  		ft_lstadd_back_bonus \
	  		ft_lstdelone_bonus \
	  		ft_lstclear_bonus \
	  		ft_lstiter_bonus \
	  		ft_lstmap_bonus

SRCS_DIR = ./
SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRCS_FILES)))
BONUS_SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(BONUS_FILES)))

OBJS_DIR = ./
OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRCS_FILES)))
BONUS_OBJ = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(BONUS_FILES)))

all: $(NAME)

$(NAME): $(OBJS) $(BONUS_OBJ)
	@ar rcs $@ $^
	@printf "\033[0;32mLibft archived!\n\e[0m"

%.o: %.c
	@gcc $(CFLAGS) -c $< -o $@

clean:
	@rm -f $(OBJS) $(BONUS_OBJ) $(BONUS_LINKED_FLAG)

fclean: clean
	@rm -f $(NAME)
	@printf "\033[0;31mLibft Cleaned!\n\e[0m"

re: fclean $(NAME)

.PHONY: bonus all clean fclean re
