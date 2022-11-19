SRCS	= main.cpp AMateria.cpp Character.cpp Cure.cpp Ice.cpp MateriaSource.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= AMateria

HEADER	= AMateria.hpp Character.cpp Cure.hpp Ice.hpp MateriaSource.hpp

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
