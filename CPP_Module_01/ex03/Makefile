SRCS	= main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= Violence

HEADER	= HumanA.hpp HumanB.hpp Weapon.hpp

CXX		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADER)
		$(CXX) $(OBJS) -o $(NAME)

%.o:		%.cpp Makefile
		$(CXX) $(FLAGS) -c $< -o $@

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re