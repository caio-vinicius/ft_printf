/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:39:40 by csouza-f          #+#    #+#             */
/*   Updated: 2020/04/18 19:41:38 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_itoa_base(unsigned int value, size_t base)
{
	int				i;
	char			*str;
	unsigned int	tmp;

	i = 0;
	tmp = value;
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
