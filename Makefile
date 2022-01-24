# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dvallien <dvallien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/05 16:30:19 by dvallien          #+#    #+#              #
#    Updated: 2021/11/20 10:41:38 by dvallien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS= ft_putchar.c			\
	  ft_putstr.c			\
	  ft_putnbr_base.c		\
	  ft_putnbr_size.c		\
	  ft_strlen.c			\
	  ft_printf.c			\
	  ft_type_format.c		

CC = gcc

CFLAGS = -Wall -Werror -Wextra

INCS = ft_printf.h

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

all : $(NAME)

$(NAME)	: $(OBJS)
		ar rcs $@ $(OBJS)

%.o : %.c $(INCS)
		$(CC) $(CFLAGS) -c $< -o $@

clean :
		rm -f $(OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
