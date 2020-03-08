/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 16:53:03 by csouza-f          #+#    #+#             */
/*   Updated: 2020/02/03 18:58:03 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, int (*f)(int))
{
	int		i;
	char	*str;

	i = 0;
	if (!s)
		return (0);
	if (!(str = ft_calloc(ft_strlen(s) + 1, sizeof(char))))
		return (0);
	while (s[i])
	{
		str[i] = f(s[i]);
		i++;
	}
	return (str);
}
