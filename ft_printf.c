/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 16:27:11 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/07 16:48:21 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	sort_type(i_list *die, va_list ap)
{
	if (ft_strchr(SPECIFIERS, die->type))
	{
		if (die->type == 'c')
			printc(die, ap);
		else if (die->type == 's')
			prints(die, ap);
		else if (die->type == 'p')
			printp(die, ap);
		else if (die->type == 'd' || die->type == 'i')
			printdi(die, ap);
		else if (die->type == 'u')
			printu(die, ap);
		else if (die->type == 'x' || die->type == 'X')
			printx(die, ap);
		else if (die->type == '%')
			die->len += ft_putchar('%');
		else
			die->len += ft_putchar('s');
	}
}

static int	identifier_digit_asterisk(char *str, i_list *die, int i)
{
	if (str[i - 1] == '.')
	{
		die->precision = ft_atoi(&str[i]);
		die->asterisk_precision = (str[i] == '*') ? 1 && i++ : 0;
	}
	else
	{
		die->width = ft_atoi(&str[i]);
		die->asterisk_width = (str[i] == '*') ? 1 && i++ : 0;
	}
	i = has_digit(i, str);
	return (i);
}

static i_list	*create_list(i_list *die)
{
	if (!(die = malloc(sizeof(i_list *))))
		return (0);
	die->asterisk_precision = 0;
	die->asterisk_width = 0;
	die->minus = 0;
	die->precision = 0;
	die->type = 0;
	die->zero = 0;
	die->width = 0;
	die->len = 0;
	return (die);
}

static i_list	*find_one_formater(char *str)
{
	static int	i;
	i_list		*die;

	die = create_list(die);
	while (str[i])
	{
		if (!(str[i] == '%'))
			die->len += ft_putchar(str[i++]);
		else
		{
			i++;
			while (ft_strchr(FLAGS, str[i]))
			{
				(str[i] == '-') ? die->minus = 1 : 0;
				(str[i++] == '0') ? die->zero = 1 : 0;
			}
			i = identifier_digit_asterisk(str, die, i);
			if (str[i] == '.')
				i = identifier_digit_asterisk(str, die, ++i);
			die->type = str[i++];
		}
		return (die);
	}
	return (0);
}

int	ft_printf(const char *format, ...)
{
	char	*str;
	int		i;
	va_list ap;
	i_list	*die;

	va_start(ap, format);
	str = (char *)format;
	i = 0;
	while ((die = find_one_formater(str)))
	{
		sort_type(die, ap);
		/*ft_putchar('\n');
		ft_putnbr(die->minus);
		ft_putstr("<- minus\n");
		ft_putnbr(die->zero);
		ft_putstr("<- zero\n");
		ft_putchar(die->type);
		ft_putstr("<- type\n");
		ft_putnbr(die->precision);
		ft_putstr("<- precision\n");
		ft_putnbr(die->width);
		ft_putstr("<- width\n");
		ft_putnbr(die->asterisk_width);
		ft_putstr("<- asterisk_width\n");
		ft_putnbr(die->asterisk_precision);
		ft_putstr("<- asterisk_precision\n");
		ft_putnbr(die->len);
		ft_putstr("<- len\n");
		ft_putchar('\n');*/
		i += die->len;
		free(die);
	}
	return (i);
}
