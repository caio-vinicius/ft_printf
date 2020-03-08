# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/15 16:26:14 by csouza-f          #+#    #+#              #
#    Updated: 2020/03/06 19:18:24 by csouza-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c ft_printf_utils.c ft_strchr.c ft_calloc.c ft_bzero.c
OBJ = ft_printf.o ft_printf_utils.o ft_strchr.o ft_calloc.o ft_bzero.o

FLAGS = -Wall -Wextra -Werror
INCLUDES = libftprintf.h

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -I$(INCLUDES) -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
