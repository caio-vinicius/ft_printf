/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:44:38 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/10 14:05:04 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

void	ft_putnbr(int nb)
{
	unsigned int nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
	{
		nbr = nb;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + 48);
}

int		has_digit(int i, char *str)
{
	while (ft_isdigit(str[i]))
		i++;
	return (i);
}

int	ft_putchar_x(char c, unsigned int x)
{
	unsigned int i;

	i = 0;
	while (i < x)
	{
		write(1, &c, 1);
		i++;
	}

	return (i);
}

char	*r_str_x(char c, unsigned int x)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!(str = ft_calloc(x + 1, sizeof(char))))
		return (0);
	while (i < x)
	{
		str[i] = c;
		i++;
	}

	return (str);
}

int	putcs_x(char *str, int c, int x, int time)
{
	int len;

	len = 0;
	if (time == 0)
	{
		len += ft_putstr(str);
		len += ft_putchar_x(c, x);
	}
	else if (time == 1)
	{
		len += ft_putchar_x(c, x);
		len += ft_putstr(str);
	}
	return (len);
}

char	*ft_itoa_base(int value, int base)
{
	int			i;
	char		*str;
	int			tmp;

	i = 0;
	tmp = value;
	while (tmp >= base)
	{
		tmp = tmp / base;
		i++;
	}
	if (!(str = (char *)ft_calloc((i + 1), sizeof(char))))
		return (NULL);
	while (i >= 0)
	{
		tmp = value % base;
		str[i] = (tmp >= 10) ? tmp - 10 + 'a' : tmp + '0';
		value /= base;
		i--;
	}
	return (str);
}
