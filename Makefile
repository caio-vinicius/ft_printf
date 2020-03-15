# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: caio <caio@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/15 16:26:14 by csouza-f          #+#    #+#              #
#    Updated: 2020/03/14 20:35:33 by caio             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a

SRCS =		handles/printc.c handles/printdi.c handles/printp.c \
			handles/printpercent.c handles/prints.c handles/printu.c \
			handles/printx.c utils/ft_itoa_base.c utils/ft_putchar_x.c \
			utils/ft_str_until.c utils/putcs_x.c utils/r_str_x.c \
			ft_printf.c ft_printf_utils.c 

INC = ft_printf.h
FLAGS = -Wall -Werror -Wextra
NOBJS := $(SRC:func/%=%)
OBJS = $(NOBJS:.c=.o)
LIBFT = libft

all: $(NAME)

$(NAME):
	$(MAKE) -C $(LIBFT)
	cp libft/libft.a $(NAME)
	gcc $(FLAGS) -c $(SRCS) $(INC)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)
	make clean -C $(LIBFT)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBFT)

re: fclean all