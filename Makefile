NAME		= push_swap
LIBFT		= libft
LIBFT_LIB	= libft.a

SRCS		= main.c input.c input_2.c init.c sort.c\
			./operations/oper_swap.c\
			./operations/oper_push.c\
			./operations/oper_reverse.c\
			./operations/oper_rotate.c

OBJS		= $(SRCS:%.c=%.o)

LIBC		= ar rc

FLAGS		= -Wall -Wextra -Werror

all			:	$(NAME)

$(NAME)		:	$(OBJS)
		make all -C $(LIBFT)/
		cc -o $(NAME) $(OBJS) -Llibft -lft

%.o			:	%.c
		cc $(FLAGS) -c $^ -I./ -o $@


clean		:
		rm -f $(OBJS)
		make clean -C $(LIBFT)

fclean		:	clean
		rm -f $(NAME)
		rm -f $(LIBFT_LIB)
		make fclean -C $(LIBFT)

re			:	fclean all

.PHONY		:	all clean fclean re bonus
