NAME = account

CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS =  tests.cpp \
		Account.cpp \

OBJS = $(SRCS:.cpp=.o)
INL = Account.hpp

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
