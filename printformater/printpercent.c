/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printpercent.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/10 15:20:26 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/12 15:46:22 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

void	printpercent(t_mold *mold, va_list ap)
{
	int len;

	len = 0;
	(mold->asterisk_width == 1) ? len = va_arg(ap, int) : 0;
	if (len < 0)
	{
		mold->minus = 1;
		len *= -1;
	}
	(mold->width > 0) ? len = mold->width : 0;
	(mold->zero == 1 && mold->minus == 1) ? mold->zero = 0 : 0;
	len += (len == 0) ? 0 : -1;
	(mold->minus) ? putcs_x("%", ' ', len, 0) : 0;
	(mold->zero) ? putcs_x("%", '0', len, 1) : 0;
	(!mold->minus && !mold->zero) ? putcs_x("%", ' ', len, 1) : 0;
}
