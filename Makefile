# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebloodbe <ebloodbe@student.21-school.ru    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/13 17:31:03 by ebloodbe          #+#    #+#              #
#    Updated: 2021/12/18 18:43:40 by ebloodbe         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	=	libftprintf.a

SRCS	=	ft_printf.c ft_printf_utils.c ft_printf_hexa.c
			
HEADER 	= 	./ft_printf.h

OBJS 	= 	$(SRCS:%.c=%.o)

CC 		= 	gcc
CFLAGS 	= 	-Wall -Wextra -Werror -I$(HEADER)
RM 		= 	rm -f

.PHONY: 	all clean fclean re

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADER)
			ar rcs $(NAME) $?

%.o	: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

	
clean: 
			$(RM) $(OBJS) $(OBJS_B)

fclean:	clean
			$(RM) $(NAME)

re: fclean all
