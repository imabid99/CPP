NAME = Zombie

CC = c++
CC_FLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f
INL = Zombie.hpp

SRCS =  main.cpp \
		Zombie.cpp \

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp 
	$(CC) $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJS) $(INL)
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)


all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJSB)

fclean: clean
	$(RM) $(NAME)

re: fclean all