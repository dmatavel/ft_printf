SRCS = ft_printf.c ft_eval_format.c ft_print_char.c ft_print_str.c \
	   ft_print_int.c ft_print_unsigned_int.c ft_print_lower_hex.c \

OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_PATH = libft/
INCLUDE = libft.a

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): include $(OBJS)
	mv $(INCLUDE) $(NAME)
	ar -rc $(NAME) $(OBJS)

include: $(LIBFT_PATH)
	make -C $(LIBFT_PATH) all
	make -C $(LIBFT_PATH) clean
	cd $(LIBFT_PATH) && mv $(INCLUDE) ../

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: include all clean fclean re
