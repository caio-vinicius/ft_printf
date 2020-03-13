/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_str_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:43:08 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/13 17:33:07 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*r_str_x(char c, unsigned int x)
{
	unsigned int	i;
	char			*str;

	i = 0;
	if (!(str = ft_calloc(x + 1, sizeof(char))))
		return (0);
	while (i < x)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
