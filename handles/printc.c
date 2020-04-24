/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:26:54 by csouza-f          #+#    #+#             */
/*   Updated: 2020/04/24 15:52:13 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	printc(t_mold *mold, va_list ap)
{
	int c;
	int len;

	len = 0;
	(mold->asterisk_width == 1) ? len = va_arg(ap, int) : 0;
	(mold->asterisk_precision == 1) ? len = va_arg(ap, int) : 0;
	(mold->width > 0) ? len = mold->width : 0;
	c = va_arg(ap, int);
	len += (len > 0) ? -1 : 0;
	(len < 0) ? len = 0 : 0;
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
