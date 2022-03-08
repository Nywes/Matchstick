##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC	=	sources/main.c\
		sources/ai.c\
		sources/deal_first_case.c\
		sources/deal_second_case.c\
		sources/deal_third_case.c\
		sources/deal_fourth_case.c\
		sources/deal_fifth_case.c\
		sources/get_getline_nbr.c\
		sources/manage_cases.c\
		sources/matchstick.c\
		sources/print_map.c\
		sources/stock_functions.c\
		sources/get_or_check_functions.c\

TESTSRC	=	sources/ai.c\
			sources/deal_first_case.c\
			sources/deal_second_case.c\
			sources/deal_third_case.c\
			sources/deal_fourth_case.c\
			sources/deal_fifth_case.c\
			sources/get_getline_nbr.c\
			sources/manage_cases.c\
			sources/matchstick.c\
			sources/print_map.c\
			sources/stock_functions.c\
			sources/get_or_check_functions.c\

TESTFILES	=	tests/test_get_getline_nbr.c\
				tests/test_ai_turn.c\
				tests/test_win_condition.c\
				tests/test_check_values.c\
				tests/test_if_lose_nbr_condition.c\
				tests/test_deal_first_case.c\
				tests/test_deal_second_case.c\
				tests/test_deal_third_case.c\
				tests/test_deal_fourth_case.c\
				tests/test_deal_fifth_case.c\

OBJ	=	$(SRC:%.c=%.o)

NAME	=	matchstick

TESTNAME	=	unit_test

CC	=	gcc

CFLAGS	=	-W -Wall -Wshadow -Wextra -I include/

LDFLAGS =	--coverage -lcriterion -I include/

all:		$(NAME)

$(NAME):	$(OBJ)
			$(MAKE) -C lib/my all
			$(CC) -o $(NAME) $(OBJ) -Llib/my/ -lmy $(CFLAGS)

tests_run:
			$(MAKE) -C lib/my all
			$(CC) -o $(TESTNAME) $(TESTSRC) $(TESTFILES) -Llib/my/ -lmy $(LDFLAGS)
			./$(TESTNAME)

clean:
		$(RM) $(OBJ)
		$(RM) *~
		$(MAKE) -C lib/my clean

fclean:		clean
			$(RM) $(NAME)
			$(RM) $(PJTNAME)
			$(RM) $(TESTNAME)
			$(RM) *.gc*
			$(MAKE) -C lib/my fclean

re:		fclean all

.PHONY:
		all clean fclean re