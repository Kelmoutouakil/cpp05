CC = c++
NAME = a.out
CPPFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address -g

SRC = $(wildcard *.cpp)
HEADER =$(wildcard *.hpp)

OBJ = $(SRC:.cpp=.o)


all: $(NAME)
$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CPPFLAGS) $(OBJ) -o $(NAME)

%.o:%.cpp
	$(CC) $(CPPFLAGS) -c -o $@ $^

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all	

.PHONY: clean fclean all