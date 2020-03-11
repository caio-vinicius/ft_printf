/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/07 15:27:25 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/11 19:32:00 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"
#include <stdio.h>

void	printp(s_mold *mold, va_list ap)
{
    size_t n;
    char *str;

    n = va_arg(ap, size_t);
    ft_putstr("0x");
    ft_putstr(ft_itoa_base(n, 16));
}
