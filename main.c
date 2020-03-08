/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:50:30 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/06 09:23:40 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int main(void)
{
	//teste com c
	//ft_printf("MEU PRINTF: %03c|\n", 'c');
	//printf("PRINTF: %-5c\n", 'c');
	//ft_printf("PRINTF: %c|\n", '\0');
	//printf("PRINTF: %c|\n", '\0');
	//ft_printf("MEU PRINTF: %5c\n", '\0');
	//printf("PRINTF: %5c\n", '\0');
	//ft_printf("MEU PRINTF: %-5c\n", '\0');
	//printf("PRINTF: %-5c\n", '\0');
	//ft_printf("MEU PRINTF: %c\n", 'c');
	//printf("PRINTF: %c\n", 'c');

	//teste com x e X
	ft_printf("hex: %2x", 10);
	return (0);
}