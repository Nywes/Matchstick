##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	sources/my_put_uns_nbr.c\
		sources/my_putnbr_base.c\
		sources/my_put_long_nbr.c\
		sources/my_compute_power_rec.c\
		sources/my_compute_square_root.c\
		sources/my_find_prime_sup.c\
		sources/my_getnbr.c\
		sources/my_isneg.c\
		sources/my_is_prime.c\
		sources/my_printf.c\
		sources/my_putchar.c\
		sources/my_put_nbr.c\
		sources/my_putstr.c\
		sources/my_revstr.c\
		sources/my_showmem.c\
		sources/my_showstr.c\
		sources/my_show_word_array.c\
		sources/my_sort_int_array.c\
		sources/my_strcapitalize.c\
		sources/my_strcat.c\
		sources/my_strcmp.c\
		sources/my_strcpy.c\
		sources/my_strdup.c\
		sources/my_str_isalpha.c\
		sources/my_str_islower.c\
		sources/my_str_isnum.c\
		sources/my_str_isprintable.c\
		sources/my_str_isupper.c\
		sources/my_strlen.c\
		sources/my_strlowcase.c\
		sources/my_strncat.c\
		sources/my_strncmp.c\
		sources/my_strncpy.c\
		sources/my_strstr.c\
		sources/my_str_to_word_array.c\
		sources/my_strupcase.c\
		sources/my_swap.c\

OBJ	=	$(SRC:%.c=%.o)

NAME	=	libmy.a

CC = gcc

all: $(NAME)

$(NAME):	$(OBJ)
			$(AR) rc $(NAME) $(OBJ)

clean:
		$(RM) $(OBJ)
		$(RM) *~

fclean:		clean
			$(RM) $(NAME)

re: fclean all

.PHONY:
		all clean fclean re