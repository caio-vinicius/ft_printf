/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:27:31 by csouza-f          #+#    #+#             */
/*   Updated: 2020/04/22 16:42:46 by caio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	printu(t_mold *mold, va_list ap)
{
	char	*n;
	int		len;

	len = 0;
	(mold->asterisk_width == 1) ? len = va_arg(ap, int) : 0;
	(mold->asterisk_precision == 1) ? mold->precision = va_arg(ap, int) : 0;
	if (len < 0)
	{
		mold->minus = 1;
		len *= -1;
	}
	n = ft_itoa_base(va_arg(ap, unsigned int), 10);
	if (mold->precision > 0 && mold->precision > (int)ft_strlen(n))
		n = ft_strjoin(r_str_x('0', mold->precision - (int)ft_strlen(n)), n);
	(mold->precision == 0 && n[0] == '0') ? n[0] = '\0' : 0;
	(mold->precision > 0) ? mold->zero = 0 : 0;
	(mold->width > 0) ? len = mold->width : 0;
	(mold->zero == 1 && mold->minus == 1) ? mold->zero = 0 : 0;
	len += (len == 0) ? 0 : -ft_strlen(n);
	(len < 0) ? len = 0 : 0;
	mold->len += (mold->minus) ? ft_cs(n, ' ', len, 0) : 0;
	mold->len += (mold->zero) ? ft_cs(n, '0', len, 1) : 0;
	mold->len += (!mold->minus && !mold->zero) ? ft_cs(n, ' ', len, 1) : 0;
	free(n);
}
