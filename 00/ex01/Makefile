NAME=contact
CC=c++
CPPFLAGS=-Wall -Wextra -Werror

SRCS = Contact.cpp ContactConsole.cpp MyAwesomePhoneBook.cpp main.cpp

all: $(NAME)

$(NAME): $(SRCS)
	@ $(CC) $(CPPFLAGS) $(SRCS) -o $(NAME)

run:
	./$(NAME)
clean:
	@ rm -f $(NAME)

fclean : clean

re : fclean all