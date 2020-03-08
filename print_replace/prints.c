/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:27:12 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/07 16:09:46 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	prints(i_list *die, va_list ap)
{
	char *str;
	int len;

	len = ft_strlen(str);
	str = (va_arg(ap, char *));
	/*if (die->width > len)
	{
		if (die->minus)
		{
			die->len += ft_putstr(str);
			die->len += ft_putchar_x(' ', (die->width - len));
		}
	}*/
	die->len += ft_putstr(str);
}
