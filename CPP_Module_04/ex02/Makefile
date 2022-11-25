SRCS	= main.cpp AAnimal.cpp Cat.cpp Dog.cpp Brain.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= AAnimal

HEADER	= AAnimal.hpp Cat.cpp Dog.hpp Brain.hpp

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
