CC = cc
CFLAGS = -Wall -Wextra -Werror
LDFLAGS = -L./libft
LDLIBS = -lft

SRC = src/check_args.c src/utils.c src/push_swap.c src/sorts.c src/sorts_small.c src/operations.c
OBJ = $(SRC:.c=.o)
NAME = push_swap

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./libft
	$(CC) $(CFLAGS) $(OBJ) -o $@ $(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(OBJ)
	make -C ./libft clean

fclean: clean
	rm -f $(NAME)
	make -C ./libft fclean

re: fclean all
