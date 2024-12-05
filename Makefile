# Variables
CC = cc
CFLAGS = -Wall -Wextra -Werror

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a
INCLUDES = -I. -I$(LIBFT_PATH)

SRCS = ft_printf.c ft_print_charorstr.c ft_print_pointer.c ft_print_number.c ft_print_unsigned.c ft_print_hexa.c
OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

RM = rm -f

# Rules
all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_PATH)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	$(MAKE) -C $(LIBFT_PATH) clean

fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_PATH) fclean

re: fclean all

simple_test: $(LIBFT) $(NAME) ft_printftest_simple.o
	$(CC) $(CFLAGS) $(OBJS) ft_printftest_simple.o -L. -lftprintf -L$(LIBFT_PATH) -lft -o simple_test

ft_printftest_simple.o: ft_printftest_simple.c
	$(CC) $(CFLAGS) -c ft_printftest_simple.c -o ft_printftest_simple.o

tclean:
	$(RM) ft_printftest_simple.o simple_test

.PHONY: all clean fclean re test
