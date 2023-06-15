CC = c++ -Wall -Wextra -Werror -std=c++98
CFILES = main.cpp
MAIN = easyfind

all: $(MAIN)

$(MAIN):
	$(CC) -g $(CFILES) easyfind.hpp -o $(MAIN)

clean:
	rm $(MAIN)

fclean: clean

re: fclean all

.PHONY: all clean flcean re