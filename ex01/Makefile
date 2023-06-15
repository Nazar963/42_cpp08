CC = c++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp Span.cpp
MAIN = span

all: $(MAIN)

$(MAIN):
	$(CC) -g $(CFILES) Span.hpp -o $(MAIN)

clean:
	rm $(MAIN)

fclean: clean

re: fclean all

.PHONY: all clean flcean re