NAME = push_swap
SRC_DIR = src
LIBFT_DIR = libft
MOVES_DIR = moves

SRC_FILES = main.c parcing.c utills.c list_utils.c sort.c \
			sort2.c sort3.c sort5.c index_it.c send_to_a.c \
			send_to_b.c

LIBFT_FILES = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
       ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
       ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
       ft_calloc.c ft_strdup.c ft_toupper.c ft_tolower.c \
       ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
       ft_strnstr.c ft_atoi.c ft_strrchr.c ft_substr.c \
       ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
       ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
       ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

MOVES_FILES = pa.c pb.c ra.c rb.c rr.c rra.c rrb.c rrr.c sa.c sb.c ss.c

SRC = $(addprefix $(SRC_DIR)/, $(SRC_FILES))
LIBFT = $(addprefix $(LIBFT_DIR)/, $(LIBFT_FILES))
MOVES = $(addprefix $(MOVES_DIR)/, $(MOVES_FILES))

OBJ = $(SRC:.c=.o) $(LIBFT:.c=.o) $(MOVES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror #-fsanitize=address -g3 

all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@printf "\033[32m[OK]\033[0m $(NAME) created!\n"

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	@printf "\033[32m[OK]\033[0m Compiled $<\n"

clean:
	@$(RM) $(OBJ)
	@printf "\033[32m[OK]\033[0m clean\n"

fclean: clean
	@$(RM) $(NAME)
	@printf "\033[32m[OK]\033[0m fclean\n"

re: fclean all

.PHONY: all clean fclean re
