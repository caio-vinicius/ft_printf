# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/15 16:26:14 by csouza-f          #+#    #+#              #
#    Updated: 2020/04/18 17:59:52 by csouza-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

F_HD		=	./handles

F_UTILS		=	./utils

SRCS		=	ft_printf.c						\
				ft_printf_utils.c				\
				${F_HD}/printc.c				\
				${F_HD}/printdi.c				\
				${F_HD}/printp.c				\
				${F_HD}/printpercent.c			\
				${F_HD}/prints.c				\
				${F_HD}/printu.c				\
				${F_HD}/printx.c				\
				${F_UTILS}/ft_itoa_base.c		\
				${F_UTILS}/ft_itoa_base2.c		\
				${F_UTILS}/ft_putchar_x.c		\
				${F_UTILS}/ft_str_until.c		\
				${F_UTILS}/putcs_x.c			\
				${F_UTILS}/r_str_x.c

OBJS 		= 	ft_printf.o						\
				ft_printf_utils.o				\
				printc.o				\
				printdi.o				\
				printp.o				\
				printpercent.o			\
				prints.o				\
				printu.o				\
				printx.o				\
				ft_itoa_base.o		\
				ft_itoa_base2.o		\
				ft_putchar_x.o		\
				ft_str_until.o		\
				putcs_x.o			\
				r_str_x.o

CC = gcc

FLAGS = -Wall -Wextra -Werror -c

INCLUDES = ft_printf.h

all: $(NAME)

$(NAME): $(OBJS)

$(OBJS): $(SRCS) $(INCLUDES)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) -I $(INCLUDES) $(SRCS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(MAKE) clean -C ./libft
	rm -rf $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re: fclean all
