/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caio <caio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:27:29 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/08 19:42:54 by caio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	printx(s_mold *mold, va_list ap)
{
    int n;
	int len;
    char *str;

	len = 0;
	if (mold->asterisk_width == 1)
		len = va_arg(ap, int);
	else if (mold->asterisk_precision == 1)
		len = va_arg(ap, int);
	else if (mold->width)
		len = mold->width;
	n = va_arg(ap, int);
	len += (len == 0) ? 0 : -1;
    if (mold->type == 'x')
        str = ft_strmapi(ft_itoa_base(n, 16), ft_tolower);
    else if (mold->type == 'X')
        str = ft_strmapi(ft_itoa_base(n, 16), ft_toupper);
	if (mold->minus)
	{
		mold->len += ft_putstr(str);
		mold->len += ft_putchar_x(' ', len);
	}
	else if (!mold->minus)
	{
		mold->len += ft_putchar_x(' ', len);
		mold->len += ft_putstr(str);
	}
}
