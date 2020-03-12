/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_x.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/12 10:44:33 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/12 11:00:53 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_putchar_x(char c, unsigned int x)
{
	unsigned int i;

	i = 0;
	while (i < x)
	{
		write(1, &c, 1);
		i++;
	}
	return (i);
}
