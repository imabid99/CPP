NAME = Phonebook

CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98 -g
RM = rm -f

SRCS =  contact.cpp \
		main.cpp \
		phonebook.cpp \

OBJS = $(SRCS:.cpp=.o)
INL = contact.hpp phonebook.hpp

%.o: %.cpp $(INL)
	$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)


all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean all
