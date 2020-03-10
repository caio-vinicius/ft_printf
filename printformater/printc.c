/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:26:54 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/09 09:19:18 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	printc(s_mold *mold, va_list ap)
{
	int c;
	int len;

	len = 0;
	if (mold->asterisk_width == 1)
		len = va_arg(ap, int);
	else if (mold->asterisk_precision == 1)
		len = va_arg(ap, int);
	else if (mold->width)
		len = mold->width;
	len = mold->width;
	c = va_arg(ap, int);
	len += (len == 0) ? 0 : -1;
	if (mold->minus)
	{
		mold->len += ft_putchar(c);
		mold->len += ft_putchar_x(' ', len);
	}
	else if (!mold->minus)
	{
		mold->len += ft_putchar_x(' ', len);
		mold->len += ft_putchar(c);
	}
}
