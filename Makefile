# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwencesl <laherwpayotmaciel@gmail.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 02:29:21 by lwencesl          #+#    #+#              #
#    Updated: 2022/11/18 02:48:49 by lwencesl         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf\

CC = cc
RM = rm -f
CFLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(NAME): $(SRC:=.o)
				ar rc $(NAME) $(SRC:=.o)
clean:
	$(RM)	$(SRC:=.o)
	fclean: clean
			$(RM)	$(NAME)
	re: fclean	$(NAME)