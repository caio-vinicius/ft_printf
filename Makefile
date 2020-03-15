# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/15 16:26:14 by csouza-f          #+#    #+#              #
#    Updated: 2020/03/15 13:10:06 by csouza-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

F_HD		=	./handles

F_UTILS		=	./utils

F_LIBFT		=	./libft

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
				${F_UTILS}/ft_putchar_x.c		\
				${F_UTILS}/ft_str_until.c		\
				${F_UTILS}/putcs_x.c			\
				${F_UTILS}/r_str_x.c

RE_O 		= 	ft_printf.o						\
				ft_printf_utils.o				\
				${F_HD}/printc.o				\
				${F_HD}/printdi.o				\
				${F_HD}/printp.o				\
				${F_HD}/printperoent.o			\
				${F_HD}/prints.o				\
				${F_HD}/printu.o				\
				${F_HD}/printx.o				\
				${F_UTILS}/ft_itoa_base.o		\
				${F_UTILS}/ft_putchar_x.o		\
				${F_UTILS}/ft_str_until.o		\
				${F_UTILS}/putcs_x.o			\
				${F_UTILS}/r_str_x.o

OBJS = $(SRCS:.c=.o)

CC = gcc

FLAGS = -c -Wall -Wextra -Werror

INCLUDES = libftprintf.h

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(CC) $(FLAGS) -I $(INCLUDES) $(SRCS)
	ar -rcs $(NAME) $(OBJS)

all : $(NAME)

clean :
	$(MAKE) clean -C ./libft
	rm -rf $(RE_O)
	rm -rf $(OBJS)
	rm *.o

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all