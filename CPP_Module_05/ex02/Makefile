SRCS	= main.cpp	Bureaucrat.cpp	AForm.cpp \
		ShrubberyCreationForm.cpp	RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp

OBJS	= $(SRCS:.cpp=.o)

NAME	= Robotomy

HEADER	= Bureaucrat.hpp AForm.hpp ShrubberyCreationForm.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp

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
