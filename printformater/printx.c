/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:27:29 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/07 15:36:46 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	printx(i_list *die, va_list ap)
{
    int n;
	int len;

	len = 0;
	if (die->asterisk_width == 1)
		len = va_arg(ap, int);
	else if (die->asterisk_precision == 1)
		len = va_arg(ap, int);
	else if (die->width)
		len = die->width;
	n = va_arg(ap, int);
	len += (len == 0) ? 0 : -1;
	if (die->minus)
	{
		die->len += ft_putstr(ft_itoa_base(n, 16));
		die->len += ft_putchar_x(' ', len);
	}
	else if (!die->minus)
	{
		die->len += ft_putchar_x(' ', len);
		die->len += ft_putstr(ft_itoa_base(n, 16));
	}
}
