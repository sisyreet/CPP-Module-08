SRCS	= megaphone.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= megaphone

CPP		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CPP) $(OBJS) -o $(NAME)

%.o:		%.cpp Makefile
		$(CPP) $(FLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re