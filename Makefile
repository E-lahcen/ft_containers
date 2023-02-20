SRCS	=	main.cpp \
			vector.cpp

OBJS		=	$(SRCS:.cpp=.o)

CC		=	c++

FLAGS	=	-Wall -Wextra -Werror -std=c++11

NAME	=	exec

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) $(SRCS) -o $(NAME)

%.o : %.cpp
	$(CC) $(FLAGS) -c $<

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re : fclean all