/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caio <caio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 16:27:11 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/08 21:10:03 by caio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

/*
**				| sort_specifier function |
**		When my mold is done i can call this function 
**		to choose what type of replace i will do, 
**		if matches something will be printed.
*/
static void	sort_specifier(s_mold *mold, va_list ap)
{
	if (ft_strchr(SPECIFIERS, mold->type))
	{
		if (mold->type == 'c')
			printc(mold, ap);
		else if (mold->type == 's')
			prints(mold, ap);
		else if (mold->type == 'p')
			printp(mold, ap);
		else if (mold->type == 'd' || mold->type == 'i')
			printdi(mold, ap);
		else if (mold->type == 'u')
			printu(mold, ap);
		else if (mold->type == 'x' || mold->type == 'X')
			printx(mold, ap);
		else if (mold->type == '%')
			mold->len += ft_putchar('%');
	}
}
/*
**				| search_dora function |
**		yes, dora. (d)igit or (a)sterisk. this function
**		search for asterisk or digit and run with my
**			counter (variable i).
*/
static int	search_dora(char *str, s_mold *mold, int i)
{
	if (str[i - 1] == '.')
	{
		mold->precision = ft_atoi(&str[i]);
		mold->asterisk_precision = (str[i] == '*') ? 1 && i++ : 0;
	}
	else
	{
		mold->width = ft_atoi(&str[i]);
		mold->asterisk_width = (str[i] == '*') ? 1 && i++ : 0;
	}
	i = has_digit(i, str);
	return (i);
}
/*
**				| create_mold function |
**		this function is used to initialize my struct.
**			it set all proprieties with 0.
*/
static s_mold	*create_mold(s_mold *mold)
{
	if (!(mold = malloc(sizeof(s_mold))))
		return (0);
	mold->asterisk_precision = 0;
	mold->asterisk_width = 0;
	mold->minus = 0;
	mold->precision = 0;
	mold->type = 0;
	mold->zero = 0;
	mold->width = 0;
	mold->len = 0;
	return (mold);
}
/*
**				| findone_formater function |
**		where my mold is effective done. if has a %
**		he analyze until specifier was found, if not
**		just print the character and always return mold
*/
static s_mold	*findone_formater(char *str)
{
	static int	i;
	s_mold		*mold;

	create_mold(mold);
	while (str[i])
	{
		if (!(str[i] == '%'))
			mold->len += ft_putchar(str[i++]);
		else
		{
			i++;
			while (ft_strchr(FLAGS, str[i]))
			{
				(str[i] == '-') ? mold->minus = 1 : 0;
				(str[i++] == '0') ? mold->zero = 1 : 0;
			}
			i = search_dora(str, mold, i);
			if (str[i] == '.')
				i = search_dora(str, mold, ++i);
			mold->type = str[i++];
		}
		return (mold);
	}
	return (0);
}
/*
**				| ft_printf function |
**		here i call my aux above functions to everthing
**		works ok. here too i free my mold, va_end and
**		return lenght of string printed by printf.
*/
int	ft_printf(const char *format, ...)
{
	char	*str;
	int		i;
	va_list ap;
	s_mold	*mold;

	i = 0;
	va_start(ap, format);
	str = (char *)format;
	while ((mold = findone_formater(str)))
	{
		sort_specifier(mold, ap);
		i += mold->len;
		free(mold);
	}
	va_end(ap);
	return (i);
}
