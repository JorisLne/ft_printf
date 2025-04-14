# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jlaine <jlaine@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/03 10:26:40 by jlaine            #+#    #+#              #
#    Updated: 2024/06/04 10:59:54 by jlaine           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a

CFLAGS  = -Wall -Wextra -Werror

SRCS    = ft_printf.c ft_printf_utils.c

OBJS    = $(SRCS:.c=.o)

RM      = rm -fr

.c.o:
	cc $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)

clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all

.PHONY: all, clean, fclean, re