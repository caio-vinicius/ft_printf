/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caio <caio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:26:54 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/10 22:16:53 by caio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	printc(s_mold *mold, va_list ap)
{
	int c;
	int len;

	len = 0;
	(mold->asterisk_width == 1) ? len = va_arg(ap, int) : 0;
	(mold->asterisk_precision == 1) ? len = va_arg(ap, int) : 0;
	(mold->width > 0) ? len = mold->width : 0;
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
