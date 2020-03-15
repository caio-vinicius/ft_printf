/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putcs_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:42:38 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/15 20:10:56 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	putcs_x(char *str, int c, int x, int time, int nbr)
{
	int len;

	len = 0;
	(nbr < 0 && x != 0) ? x-- : 0;
	if (time == 0)
	{
		(nbr < 0) ? len += ft_putchar('-') : 0;
		len += ft_putstr(str);
		len += ft_putchar_x(c, x);
	}
	else if (time == 1)
	{
		(nbr < 0 && c == '0') ? len += ft_putchar('-') : 0;
		len += ft_putchar_x(c, x);
		(nbr < 0 && c == ' ') ? len += ft_putchar('-') : 0;
		len += ft_putstr(str);
	}
	return (len);
}
