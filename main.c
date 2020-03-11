/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caio <caio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:50:30 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/10 22:42:22 by caio             ###   ########.fr       */
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
	//
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
	printf("PRINTF: %*X|\n", 3, 100);
	ft_printf("PRINTF: %*.x|\n", -5, 10);
	printf("PRINTF: %*.x|\n", -5, 10);
	ft_printf("PRINTF: %*.5x|\n", -5, 10);
	printf("PRINTF: %*.5x|\n", -5, 10);
	ft_printf("|%x|         \n",  64813);
	printf("|%x|         \n",  64813);
	ft_printf("|%10x|       \n",  64813);
	printf("|%10x|       \n",  64813);
	ft_printf("|%010x|      \n",  64813);
	printf("|%010x|      \n",  64813);
	ft_printf("%-10x\n", 64813);
	printf("%-10x|\n", 64813);
	ft_printf("%.10x|\n", 64813);
	printf("%.10x|\n", 64813);
	ft_printf("%-8.7x|\n", 64813);
	printf("%-8.7x|\n", 64813);
	printf("%050.x %x|\n",  64813, 10);
	ft_printf("%050.x %x|\n",  64813, 10);
	printf("%-3x|\n", 10);
	ft_printf("%0-0-0-3x|\n", 10);
	printf("%.*x|\n", -3, 1);
	ft_printf("%.*x|\n", -3, 1);*/
	//
	//teste com %
	/*ft_printf("%04%|\n");
	ft_printf("%-4%|\n");
	ft_printf("%3%|\n");
	ft_printf("%*%|\n", 3);
	ft_printf("%*%|\n", -3);*/
	//
	//teste com s
	/*printf("%.3s|\n", "caio");
	ft_printf("%.3s|\n", "caio");
	printf("%10.2s|\n", "caio");
	ft_printf("%10.2s|\n", "caio");
	printf("%*.*s|\n", -5, 2, "caio");
	ft_printf("%*.*s|\n", -5, 2,"caio");
	printf("%*.*s|\n", -5, -2, "caio");
	ft_printf("%*.*s|\n", -5, -2,"caio");
	printf("%*.*s|\n", 5, -2, "caio");
	ft_printf("%*.*s|\n", 5, -2,"caio");
	printf("%*.1s|\n", 5, "caio");
	ft_printf("%*.1s|\n", 5, "caio");*/
	//printf("%6s|\n", "caio");
	ft_printf("%.2s|\n", "caio");

	return (0);
}