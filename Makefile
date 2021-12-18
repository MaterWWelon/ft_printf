# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbellini <mbellini@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/14 16:54:39 by mbellini          #+#    #+#              #
#    Updated: 2021/12/15 17:50:29 by mbellini         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_printf.c ft_putdeci.c ft_putdecins.c ft_puthexa.c ft_putptr_fd.c \
			ft_putstr.c

OBJS	= $(SRCS:.c=.o)

CC	= gcc
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror

NAME	= libftprintf.a

all:	$(NAME)

$(NAME):	$(OBJS)
		make -C libft
		cp libft/libft.a $(NAME)
		ar rc $(NAME) $(OBJS) libft/libft.a

%.o: %.c
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
		make -C libft clean
		$(RM) $(OBJS)
fclean:	clean
		make -C libft fclean
		$(RM) $(NAME)
re:	fclean $(NAME)

.PHONY:	all clean fclean re
