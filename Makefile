CC		= gcc
NAME	= libftprintf.a
SRCS	= src/apply/apply_procent.c \
          src/parser/parse_procent.c \
          src/print/print_char.c \
          src/utils/parse_utils.c \
          src/utils/struct_init.c \
          src/ft_printf.c


OBJS		= $(SRCS:.c=.o)


FLAGS	= -Wall -Wextra #add -Werror
LIBC	= ar rc
LIBR	= ranlib
RM		= rm -f
INCL	= ./

.c.o:
	$(CC) $(CFLAGS) -I $(INCLUDES) -c $< -o $(<:.c=.o)

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
