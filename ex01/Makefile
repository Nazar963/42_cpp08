CC = c++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp Span.cpp
NAME = span

all: $(NAME)

$(NAME):
	$(CC) -g $(CFILES) Span.hpp -o $(NAME)

clean:
	rm $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean flcean re