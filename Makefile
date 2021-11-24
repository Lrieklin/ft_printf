NAME	=	libftprintf.a

SRCS	=	$(wildcard *.c)

HEADER	=	ft_printf.h

OBJ		=	$(SRCS:%.c=%.o)

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror -I $(HEADER)

LIBFT	=	libft/libft.a

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJ) $(LIBFT)
	cp $(LIBFT) $(NAME)
	ar rcs $(NAME) $(OBJ)


$(LIBFT):
			make -C libft
				

%.o 	:	%.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
		rm -f $(OBJ) $(OBJ_B)

fclean	:	clean
		rm -f $(NAME)

re		:	fclean all
