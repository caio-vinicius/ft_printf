/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:42:38 by csouza-f          #+#    #+#             */
/*   Updated: 2020/04/22 16:57:06 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	get_nbr(int nbr)
{
	static int n;
	int nu;

	if (nbr == 0)
	{
		nu = n;
		n = nu;
	}
	else
		n = nbr;
	return (n);
}

int	ft_cs(char *str, int c, int x, int time)
{
	int	len;
	int	nbr;

	nbr = get_nbr(0);
	len = 0;
	(nbr < 0 && x != 0) ? x-- : 0;
	if (time == 0)
	{
		if (nbr < 0 && nbr >= -2147483647)
			len += ft_putchar('-');
		len += ft_putstr(str);
		len += ft_putchar_x(c, x);
	}
	else if (time == 1)
	{
		if (nbr < 0 && c == '0' && nbr >= -2147483647)
			len += ft_putchar('-');
		len += ft_putchar_x(c, x);
		if (nbr < 0 && nbr >= -2147483647 && c == ' ')
			len += ft_putchar('-');
		len += ft_putstr(str);
	}
	return (len);
}
