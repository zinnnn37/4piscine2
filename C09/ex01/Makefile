GCC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c
OBJT = $(SRCS:%.c=%.o)
HDRS = includes/ft.h
RM = rm -f

all:	$(NAME)

$(NAME): $(OBJT)
	ar rc $(NAME) $(OBJT)

$(OBJT): $(SRCS)
	$(GCC) $(CFLAGS) -c $< -o $@ -I $(HDRS)

clean:
	$(RM) $(OBJT)

fclean	: clean
	$(RM) $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
