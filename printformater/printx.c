/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:27:29 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/10 16:35:54 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	printx(s_mold *mold, va_list ap)
{
	int		n;
	int		len;
	char	*str;

	len = 0;
	(mold->asterisk_width == 1) ? len = va_arg(ap, int) : 0;
	(mold->asterisk_precision == 1) ? len = va_arg(ap, int) : 0;
	if (len < 0)
	{
		mold->minus = 1;
		len *= -1;
	}
	(mold->width > 0) ? len = mold->width : 0;
	n = va_arg(ap, int);
	(mold->zero == 1 && mold->minus == 1) ? mold->zero = 0 : 0;
	(mold->type == 'x') ? str = ft_strmapi(ft_itoa_base(n, 16), ft_tolower) : 0;
	(mold->type == 'X') ? str = ft_strmapi(ft_itoa_base(n, 16), ft_toupper) : 0;
	if (mold->precision > 0)
		str = ft_strjoin(r_str_x('0', mold->precision - ft_strlen(str)), str);
	(mold->precision == 0) ? mold->zero = 0 : 0;
	len += (len == 0) ? 0 : -ft_strlen(str);
	mold->len += (mold->minus) ? putcs_x(str, ' ', len, 0) : 0;
	mold->len += (mold->zero) ? putcs_x(str, '0', len, 1) : 0;
	mold->len += (!mold->minus && !mold->zero) ? putcs_x(str, ' ', len, 1) : 0;
	free(str);
}
