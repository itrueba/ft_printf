
NAME		= libftprintf.a
INCLUDE		= include
LIBFTA		= libft/libft.a
LIBFT		= libft
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra
RM			= rm -rf
AR			= ar rcs

#Sources

SRCS	=	ft_hex.c ft_printf.c ft_str_nbr.c ft_uitoa.c

OBJS	= 	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS) 
			@make -C $(LIBFT)
			@$(AR) $(NAME) $(LIBFTA) $(OBJS)

clean:
			@make -C $(LIBFT) clean
			@$(RM) $(OBJS)

fclean:		clean
			@make -C $(LIBFT) fclean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re norm