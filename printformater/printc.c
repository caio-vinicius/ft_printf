/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:26:54 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/07 18:26:35 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	printc(i_list *die, va_list ap)
{
	int c;
	int len;

	len = 0;
	if (die->asterisk_width == 1)
		len = va_arg(ap, int);
	else if (die->asterisk_precision == 1)
		len = va_arg(ap, int);
	else if (die->width)
		len = die->width;
	c = va_arg(ap, int);
	len += (len == 0) ? 0 : -1;
	if (die->minus)
	{
		die->len += ft_putchar(c);
		die->len += ft_putchar_x(' ', len);
	}
	else if (!die->minus)
	{
		die->len += ft_putchar_x(' ', len);
		die->len += ft_putchar(c);
	}
}
