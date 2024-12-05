# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a
INCLUDES = -I. -I$(LIBFT_PATH)

SRCS = ft_printf.c ft_print_charorstr.c ft_print_pointer.c ft_print_nbr.c ft_printunsigned.c ft_print_hexa.c
OBJS = $(SRCS:.c=.o)

NAME = ft_printf

RM = rm -f

# Rules
all: $(LIBFT) $(NAME)

$(LIBFT):
    $(MAKE) -C $(LIBFT_PATH)

$(NAME): $(OBJS) $(LIBFT)
    $(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_PATH) -lft -o $(NAME)

clean:
    $(RM) $(OBJS)
    $(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
    $(RM) $(NAME)
    $(MAKE) -C $(LIBFT_PATH) fclean

re: fclean all

test: $(LIBFT) $(OBJS) printf_test.o
    $(CC) $(CFLAGS) $(OBJS) printf_test.o -L$(LIBFT_PATH) -lft -o testprintf

printf_test.o: printf_test.c
    $(CC) $(CFLAGS) -c printf_test.c -o printf_test.o

.PHONY: all clean fclean re test
