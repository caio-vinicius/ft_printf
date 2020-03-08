/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 16:31:36 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/07 15:42:49 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF
# define LIBFTPRINTF

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
#define SPECIFIERS "cspdiuxX%"
#define FLAGS "-0"

typedef struct	identifier_list
{
    int minus;
    int zero;
    char type;
    int precision;
    int width;
    int asterisk_width;
    int asterisk_precision;
    int len;
}				i_list;

int     ft_printf(const char * format, ...);
int     ft_putstr(char *str);
int     ft_putchar(char c);
void	ft_putnbr(int nb);
void	printc(i_list *die, va_list ap);
void	printdi(i_list *die, va_list ap);
void	printp(i_list *die, va_list ap);
void	prints(i_list *die, va_list ap);
void	printu(i_list *die, va_list ap);
void	printx(i_list *die, va_list ap);

int     ft_putchar_x(char c, int x);
int     has_digit(int i, char *str);

#endif

