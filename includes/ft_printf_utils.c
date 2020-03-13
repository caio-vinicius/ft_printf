/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:44:38 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/13 12:43:26 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int		ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

void	ft_putnbr(int nb)
{
	unsigned int nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
	{
		nbr = nb;
	}
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + 48);
}

int		has_digit(int i, char *str)
{
	while (ft_isdigit(str[i]))
		i++;
	return (i);
}
