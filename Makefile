
NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
RM			= rm -rf
AR			= ar rcs
LIB			= Libft

SRCS	=	ft_hex.c ft_printf.c ft_str_nbr.c

OBJS	= 	$(SRCS:.c=.o)

all:		$(NAME)

%.o: %.c
		$(CC) $(CFLAGS) -c $< -o $@

$(NAME):	$(OBJS) 
			@make -C $(LIB)
			@mv $(LIB)/libft.a $(NAME)
			$(AR) $@ $^

clean:
			@make -C $(LIB) clean
			@$(RM) $(OBJS)

fclean:		clean
			@make -C $(LIB) fclean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re