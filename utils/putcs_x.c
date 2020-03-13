/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putcs_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:42:38 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/13 17:30:14 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

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
