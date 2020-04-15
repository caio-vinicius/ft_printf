/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:27:25 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/15 19:27:35 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

void	printp(t_mold *mold, va_list ap)
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
	n = myitoabase(va_arg(ap, size_t), 16);
	(mold->width > 0) ? len = mold->width : 0;
	if (mold->precision > 0 && mold->precision > (int)ft_strlen(n))
		n = ft_strjoin(r_str_x('0', mold->precision - ft_strlen(n)), n);
	(mold->precision == 0 && n[0] == '0') ? n[0] = '\0' : 0;
	n = ft_strjoin("0x", n);
	len += (len == 0) ? 0 : -ft_strlen(n);
	(len < 0) ? len = 0 : 0;
	(mold->zero == 1 && mold->minus == 1) ? mold->zero = 0 : 0;
	mold->len += (mold->minus) ? putcs_x(n, ' ', len, 0, 1) : 0;
	mold->len += (mold->zero) ? putcs_x(n, '0', len, 1, 1) : 0;
	mold->len += (!mold->minus && !mold->zero) ? putcs_x(n, ' ', len, 1, 1) : 0;
	free(n);
}
