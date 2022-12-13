
NAME		= libftprintf.a
INCLUDE		= include
LIBFT		= Libft
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I
RM			= rm -f
AR			= ar rcs

#Sources

SRCS	=	ft_hex.c ft_printf.c ft_str_nbr.c ft_uiota.c 

OBJS	= 	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			@make -C $(LIBFT)
			@mv Libft/libft.a .
			@$(AR) $(NAME) $(OBJS) libft.a

clean:
			@$(RM) -rf $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re norm