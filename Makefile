NAME = libftprintf.a

SRCS = srcs/conversions.c srcs/conversions_c.c srcs/ft_itoa.c srcs/ft_list_push_back.c \
	srcs/ft_list_reverse.c srcs/ft_list_size.c srcs/b_printf.c srcs/ft_putstr.c \
	srcs/ft_strlen.c srcs/ft_create_elem.c srcs/ft_list_clear.c

INCLUDES = include/

RULES = -Wall -Wextra -Werror

OBJ = *.o

all: $(NAME)

$(NAME):
	gcc $(RULES) -c $(SRCS) -I $(INCLUDES)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
