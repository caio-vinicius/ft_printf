/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:27:29 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/09 11:25:15 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	printx(s_mold *mold, va_list ap)
{
    int n;
	int len;
    char *str;

	len = 0;
	(mold->asterisk_width == 1) ? len = va_arg(ap, int) : 0; 
	(mold->asterisk_precision == 1) ? len = va_arg(ap, int) : 0;
	(mold->width) ? len = mold->width : 0;
	n = va_arg(ap, int);
    (mold->type == 'x') ? str = ft_strmapi(ft_itoa_base(n, 16), ft_tolower) : 0;
    (mold->type == 'X') ? str = ft_strmapi(ft_itoa_base(n, 16), ft_toupper) : 0;
	len += (len == 0) ? 0 : -ft_strlen(str);
	if (mold->precision)
		str = ft_strjoin(ft_rstr_x('0', mold->precision-ft_strlen(str)), str);
	mold->len += (mold->minus) ? ft_putstr(str) && ft_putchar_x(' ', len) : 0;
	mold->len += (mold->zero) ? ft_putchar_x('0', len) && ft_putstr(str) : 0;
	mold->len += (!mold->minus && !mold->zero) ? ft_putchar_x(' ', len) && ft_putstr(str) : 0;
	free(str);
}
