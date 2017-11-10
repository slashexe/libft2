NAME = libft.a

FLAGS = -Wall -Wextra -Werror

SRCS = *.c

OBJ = *.o

all: $(NAME)

$(NAME): $(OBJS)
	gcc $(FLAGS) -c $(SRCS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)
clean:
	/bin/rn -f $(OBJS)

fclean: clean
	/bin/rn -f $(NAME)

re: fclean all