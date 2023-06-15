CC = c++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp
MAIN = mutantstack

all: $(MAIN)

$(MAIN):
	$(CC) -g $(CFILES) MutantStack.hpp -o $(MAIN)

clean:
	rm $(MAIN)

fclean: clean

re: fclean all

.PHONY: all clean flcean re