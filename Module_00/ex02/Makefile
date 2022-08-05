NAME = Account

SRCS	= tests.cpp Account.cpp

OBJS	= $(SRCS:.cpp=.o)

GCC		= c++

FLGS	= -Wall -Wextra -Werror -std=c++98

RM		= rm -f

all:		$(NAME)

$(NAME): $(OBJS)
			$(GCC) $(FLGS) $(OBJS) -o $(NAME)

.cpp.o:
			@$(GCC) $(FLGS) -c $<

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all  clean fclean re