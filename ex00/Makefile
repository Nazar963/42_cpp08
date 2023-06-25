CC = c++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp
NAME = easyfind

all: $(NAME)

$(NAME):
	$(CC) -g $(CFILES) easyfind.hpp -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean flcean re