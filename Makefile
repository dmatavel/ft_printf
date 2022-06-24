SRCS = ft_printf.c ft_eval_format.c ft_print_char.c
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_PATH = libft/.
INCLUDES = libft/libft.a

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

include: $(LIBFT_PATH)
	make -C $(LIBFT_PATH) all
	make -C $(LIBFT_PATH) clean

$(NAME): include $(OBJS) $(INCLUDES)
	ar -rc $(NAME) $(OBJS) $(INCLUDES)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: include all clean fclean re
