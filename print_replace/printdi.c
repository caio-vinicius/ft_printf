/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printdi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:27:23 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/07 17:05:18 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	printdi(i_list *die, va_list ap)
{
    int n;

	n = va_arg(ap, int);
    if (die->minus)
	{
        ft_putnbr(n);
		die->len += ft_putchar_x(' ', die->width-1);
	}
}
