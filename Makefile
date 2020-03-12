# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/15 16:26:14 by csouza-f          #+#    #+#              #
#    Updated: 2020/03/12 12:43:06 by csouza-f         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libftprintf.a

F_INCLUDES	=	./includes

F_PF		=	./printformater

F_UTILS		=	./utils

F_LIBFT		=	./libft

SRCS		=	ft_printf.c						\
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
				${F_UTILS}/r_str_x.c

RE_O 		= 	ft_printf.o						\
				${F_INCLUDES}/ft_printf_utils.o	\
				${F_PF}/printc.o				\
				${F_PF}/printdi.o				\
				${F_PF}/printp.o				\
				${F_PF}/printperoent.o			\
				${F_PF}/prints.o				\
				${F_PF}/printu.o				\
				${F_PF}/printx.o				\
				${F_UTILS}/ft_itoa_base.o		\
				${F_UTILS}/ft_putohar_x.o		\
				${F_UTILS}/ft_str_until.o		\
				${F_UTILS}/putos_x.o			\
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

fclean : clean
	$(MAKE) fclean -C ./libft
	rm -rf $(NAME)

re : fclean all