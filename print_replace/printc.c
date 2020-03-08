/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:26:54 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/07 18:26:35 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	printc(i_list *die, va_list ap)
{
	int c;
	int len;
	// here
	len = (die->asterisk_width) ? va_arg(ap, int) : 0;
	len = (die->asterisk_precision) ? va_arg(ap, int) : 0;
	c = va_arg(ap, int);
	if (die->minus)
	{
		die->len += ft_putchar(c);
		die->len += ft_putchar_x(' ', len-1);
	}
	else if (!die->minus)
	{
		die->len += ft_putchar_x(' ', die->width-1);
		die->len += ft_putchar(c);
	}
}
