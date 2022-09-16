NAME = Bureaucrat

CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
INL = Bureaucrat.hpp Form.hpp RobotomyRequestForm.hpp PresidentialPardonForm.hpp ShrubberyCreationForm.hpp Intern.hpp

SRCS = main.cpp \
		Bureaucrat.cpp \
		Form.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \
		ShrubberyCreationForm.cpp \
		Intern.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp $(INL)
	$(CC) $(CC_FLAGS) -c -g $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)


all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean all