# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/15 16:26:14 by csouza-f          #+#    #+#              #
#    Updated: 2020/03/12 11:40:03 by csouza-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

F_INCLUDES	=	./includes

F_PF		=	./printformater

F_UTILS		=	./utils

SRC		=	ft_printf.c						\
			libftprintf.h					\
			${F_INCLUDES}/ft_printf_utils.c	\
			${F_INCLUDES}/ft_printf_utils.c	\
			${F_PF}/printc.c				\
			${F_PF}/printdi.c				\
			${F_PF}/printp.c				\
			${F_PF}/printpercent.c			\
			${F_PF}/prints.c				\
			${F_PF}/printu.c				\
			${F_PF}/printx.c				\
			${F_UTILS}/ft_itoa_base.c		\
			${F_UTILS}/ft_putchar_x.c		\
			${F_UTILS}/ft_str_until.c		\
			${F_UTILS}/putcs_x.c			\
			${F_UTILS}/r_str_x.c			\

FLAGS = -Wall -Werror -Wextra

NOBJS := $(SRC:func/%=%)

OBJS = $(NOBJS:.c=.o)

LIBFT = libft

all: $(NAME)

$(NAME):
	make -C $(LIBFT)
	cp libft/libft.a $(NAME)
	gcc $(FLAGS) -c $(SRC) -I $(INC)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFT)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT)

re: fclean all