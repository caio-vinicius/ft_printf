/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_until.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:40:49 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/13 12:15:30 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*ft_str_until(char *str, int len, int until)
{
	int		i;
	char	*newstr;

	i = 0;
	if (until > len)
		return (0);
	if (!(newstr = ft_calloc(until + 1, sizeof(char))))
		return (0);
	while (i < until)
	{
		newstr[i] = str[i];
		i++;
	}
	return (newstr);
}
