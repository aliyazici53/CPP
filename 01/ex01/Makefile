NAME=zombieHorde
CC=clang++
CFLAGS=-Wall -Wextra -Werror

SRCS = main.cpp Zombie.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(CFLAGS) $(SRCS) -o $(NAME) -fsanitize=address

run:
	./$(NAME)
clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all