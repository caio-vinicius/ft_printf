/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouza-f <csouza-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:50:30 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/09 15:24:34 by csouza-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int main(void)
{
	//teste com c
	/*ft_printf("PRINTF: %-5c|\n", 'c');
	printf("PRINTF: %-5c|\n", 'c');
	ft_printf("PRINTF: %c|\n", '\0');
	printf("PRINTF: %c|\n", '\0');
	ft_printf("PRINTF: %5c|\n", '\0');
	printf("PRINTF: %5c|\n", '\0');
	ft_printf("PRINTF: %-5c|\n", '\0');
	printf("PRINTF: %-5c|\n", '\0');
	ft_printf("PRINTF: %c|\n", 'c');
	printf("PRINTF: %c|\n", 'c');*/

	//teste com x e X
	/*ft_printf("PRINTF: %7X|\n", 255);
	printf("PRINTF: %7X|\n", 255);
	ft_printf("PRINTF: %7x|\n", 255);
	printf("PRINTF: %7x|\n", 255);
	ft_printf("PRINTF: %-7X|\n", 255);
	printf("PRINTF: %-7X|\n", 255);
	ft_printf("PRINTF: %07x|\n", 255);
	printf("PRINTF: %07x|\n", 255);
	ft_printf("PRINTF: %07X|\n", 255);
	printf("PRINTF: %07X|\n", 255);
	ft_printf("PRINTF: %x|\n", 0);
	printf("PRINTF: %x|\n", 0);
	ft_printf("PRINTF: %x|\n", 255);
	printf("PRINTF: %x|\n", 255);
	ft_printf("PRINTF: %X|\n", 255);
	printf("PRINTF: %X|\n", 255);
	ft_printf("PRINTF: %x|\n", 100);
	printf("PRINTF: %x|\n", 100);
	ft_printf("PRINTF: %*X|\n", 3, 100);
	printf("PRINTF: %*X|\n", 3, 100);*/
	ft_printf("PRINTF: %*x|\n", -5, 10);
	printf("PRINTF: %*x|\n", -5, 10);

	return (0);
}