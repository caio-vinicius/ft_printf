/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:27:12 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/12 11:02:37 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	prints(t_mold *mold, va_list ap)
{
	char	*str;
	int		len;

	len = 0;
	(mold->asterisk_width == 1) ? len = va_arg(ap, int) : 0;
	(mold->asterisk_precision == 1) ? mold->precision = va_arg(ap, int) : 0;
	if (len < 0)
	{
		mold->minus = 1;
		len *= -1;
	}
	str = (va_arg(ap, char *));
	(mold->width > 0) ? len = mold->width : 0;
	if (mold->precision < (int)ft_strlen(str) && mold->precision > 0)
		str = ft_str_until(str, ft_strlen(str), mold->precision);
	len += (len == 0) ? 0 : -ft_strlen(str);
	(len < 0) ? len = 0 : 0;
	mold->len += (mold->minus) ? putcs_x(str, ' ', len, 0) : 0;
	mold->len += (!mold->minus) ? putcs_x(str, ' ', len, 1) : 0;
	if (mold->precision <= (int)ft_strlen(str) && mold->precision > 0)
		free(str);
}
