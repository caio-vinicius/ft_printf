/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:39:40 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/15 13:30:42 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_itoa_base(size_t value, size_t base)
{
	int			i;
	char		*str;
	size_t		tmp;
	size_t		test;

	i = 0;
	tmp = value;
	test = -1;
	if (tmp <= test)
		tmp = 2147483647;
	while (tmp >= base)
	{
		tmp = tmp / base;
		i++;
	}
	if (!(str = (char *)ft_calloc((i + 1), sizeof(char))))
		return (NULL);
	while (i >= 0)
	{
		tmp = value % base;
		str[i] = (tmp >= 10) ? tmp - 10 + 'a' : tmp + '0';
		value /= base;
		i--;
	}
	return (str);
}
