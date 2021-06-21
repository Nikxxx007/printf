CC		= gcc
NAME	= libftprintf.a
SRCS	=


OBJS		= $(SRCS:.c=.o)


FLAGS	= -Wall -Werror -Wextra
LIBC	= ar rc
LIBR	= ranlib
RM		= rm -f
INCL	= ./

.c.o:
	$(CC) $(FLAGS) -I$(INCL) -c $< -o $(<:.c=.o)

$(NAME): 	$(OBJS)
	make bonus -C libft
	cp libft/libft.a ./$(NAME)
	$(LIBC) $(NAME) $(OBJS)
	$(LIBR) $(NAME)

all:	$(NAME)

clean:
		$(RM) $(OBJS)
		make clean -C libft
fclean:	clean
		$(RM) $(NAME)
		make fclean -C libft

re:		fclean all

.PHONY:	fclean clean re bonus
