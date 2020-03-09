/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printdi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caio <caio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:27:23 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/08 19:42:56 by caio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	printdi(s_mold *mold, va_list ap)
{
    int n;

	n = va_arg(ap, int);
    if (mold->minus)
	{
        ft_putnbr(n);
		mold->len += ft_putchar_x(' ', mold->width-1);
	}
}
