/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 16:31:36 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/12 11:50:31 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINF_H
# define FT_PRINF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# define ALL "cspdiuxX%-0.*"
# define SPECIFIERS "cspdiuxX%"
# define FLAGS "-0"

typedef struct	s_mold
{
	int		minus;
	int		zero;
	char	type;
	int		precision;
	int		width;
	int		asterisk_width;
	int		asterisk_precision;
	int		len;
}				t_mold;

int				ft_printf(const char *format, ...);
int				ft_putstr(char *str);
int				ft_putchar(char c);
void			ft_putnbr(int nb);
void			printc(t_mold *mold, va_list ap);
void			printdi(t_mold *mold, va_list ap);
void			printp(t_mold *mold, va_list ap);
void			prints(t_mold *mold, va_list ap);
void			printu(t_mold *mold, va_list ap);
void			printx(t_mold *mold, va_list ap);
void			printpercent(t_mold *mold, va_list ap);
int				ft_putchar_x(char c, unsigned int x);
char			*r_str_x(char c, unsigned int x);
int				has_digit(int i, char *str);
char			*ft_itoa_base(size_t value, size_t base);
int				putcs_x(char *str, int c, int x, int time, int nbr);
char			*ft_str_until(char *str, int len, int until);

#endif