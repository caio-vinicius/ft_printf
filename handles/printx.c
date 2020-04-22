/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:27:29 by csouza-f          #+#    #+#             */
/*   Updated: 2020/04/22 15:28:22 by caio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	printx(t_mold *mold, va_list ap)
{
	int		n;
	int		len;
	char	*str;

	len = 0;
	(mold->asterisk_width == 1) ? len = va_arg(ap, int) : 0;
	(mold->asterisk_precision == 1) ? mold->precision = va_arg(ap, int) : 0;
	(len < 0) ? mold->minus = 1 : 0;
	(len < 0) ? len *= -1 : 0;
	(mold->width > 0) ? len = mold->width : 0;
	n = va_arg(ap, int);
	(mold->zero == 1 && mold->minus == 1) ? mold->zero = 0 : 0;
	(mold->type == 'x') ? str = ft_strmapi(ft_itoa_base(n, 16), ft_tolower) : 0;
	(mold->type == 'X') ? str = ft_strmapi(ft_itoa_base(n, 16), ft_toupper) : 0;
	(mold->precision > 0) ? mold->zero = 0 : 0;
	if (mold->precision > 0 && mold->precision > (int)ft_strlen(str))
		str = ft_strjoin(r_str_x('0', mold->precision - ft_strlen(str)), str);
	(mold->precision == 0 && n == 0) ? str[0] = '\0' : 0;
	len += (len == 0) ? 0 : -ft_strlen(str);
	(len < 0) ? len = 0 : 0;
	mold->len += (mold->minus) ? ft_cs(str, ' ', len, 0) : 0;
	mold->len += (mold->zero) ? ft_cs(str, '0', len, 1) : 0;
	mold->len += (!mold->minus && !mold->zero) ? ft_cs(str, ' ', len, 1) : 0;
	free(str);
}
