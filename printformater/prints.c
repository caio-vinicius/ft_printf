/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caio <caio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:27:12 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/08 19:42:54 by caio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	prints(s_mold *mold, va_list ap)
{
	char *str;
	int len;

	len = ft_strlen(str);
	str = (va_arg(ap, char *));
	/*if (mold->width > len)
	{
		if (mold->minus)
		{
			mold->len += ft_putstr(str);
			mold->len += ft_putchar_x(' ', (mold->width - len));
		}
	}*/
	mold->len += ft_putstr(str);
}
