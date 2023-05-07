NAME=megaphone
CC=c++
CPPFLAGS=-Wall -Wextra -Werror

SRCS = megaphone.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

run:
	./$(NAME)
clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all