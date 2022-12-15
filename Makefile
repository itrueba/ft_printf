
NAME		= libftprintf.a
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
RM			= rm -rf
AR			= ar rcs

#Sources

SRCS	=	ft_hex.c ft_printf.c ft_str_nbr.c

OBJS	= 	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) 
			@make -C libft
			@cp libft/libft.a .
			@mv libft.a $(NAME)
			$(AR) $(NAME) $(OBJS)

clean:
			@make -C libft clean
			@$(RM) $(OBJS)

fclean:		clean
			@make -C libft fclean
			$(RM) $(NAME) libft.a

re:			fclean all

.PHONY:		all clean fclean re