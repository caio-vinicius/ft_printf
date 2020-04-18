/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putcs_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:42:38 by csouza-f          #+#    #+#             */
/*   Updated: 2020/04/18 19:46:22 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_cs(char *str, int c, int x, int time, int nbr)
{
	int		len;

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
		(nbr < 0 && c == '0') ? len += ft_putchar('-') : 0;
		len += ft_putchar_x(c, x);
		if (nbr < 0 && nbr >= -2147483647 && c == ' ')
			len += ft_putchar('-');
		len += ft_putstr(str);
	}
	return (len);
}
