/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caio <caio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/15 18:50:30 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/14 16:52:10 by caio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
	//int a;
	//teste com c
	/*printf("%s", "TESTE COM C: \n");
	ft_printf("PRINTF: %-5c|\n", 'c');
	printf("PRINTF: %-5c|\n", 'c');
	ft_printf("PRINTF: %c|\n", '\0');
	printf("PRINTF: %c|\n", '\0');
	ft_printf("PRINTF: %5c|\n", '\0');
	printf("PRINTF: %5c|\n", '\0');
	ft_printf("PRINTF: %-5c|\n", '\0');
	printf("PRINTF: %-5c|\n", '\0');
	ft_printf("PRINTF: %c|\n", 'c');
	printf("PRINTF: %c|\n", 'c');
	//
	//teste com x e X
	printf("%s", "TESTE COM x e X: \n");
	ft_printf("PRINTF: %7X|\n", 255);
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
	/*printf("%s", "TESTE COM %%: \n");
	ft_printf("%04%|\n");
	printf("%04%|\n");
	ft_printf("%-4%|\n");
	printf("%-4%|\n");
	ft_printf("%3%|\n");
	printf("%3%|\n");
	ft_printf("%*%|\n", -3);
	printf("%*%|\n", -3);*/
	/*ft_printf("%%|\n");
	printf("%%|\n");
	ft_printf("%5%|\n");
	printf("%5%|\n");
	ft_printf("%-5%|\n");
	printf("%-5%|\n");
	ft_printf("%05%|\n");
	printf("%05%|\n");
	ft_printf("%0-5%|\n");
	printf("%0-5%|\n");*/
	//printf("%|\n");
	//
	//teste com s
	/*printf("%s", "TESTE COM S: \n");
	printf("%.3s|\n", "caio");
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
	ft_printf("%*.1s|\n", 5, "caio");
	//printf("%0-6s|\n", "caio");
	ft_printf("%0-6s|\n", "caio");
	//
	//teste com d e i
	printf("%s", "TESTE COM I: \n");
	ft_printf("%*d|\n", -3, -3);
	printf("%*d|\n", -3, -3);
	printf("%3i|\n", 3);
	ft_printf("%3i|\n", 3);
	printf("%3.3i|\n", 3);
	ft_printf("%3.3i|\n", 3);
	printf("%-3.3i|\n", 3);
	ft_printf("%-3.3i|\n", 3);
	printf("%04.3i|\n", 3);
	ft_printf("%04.3i|\n", 3);
	printf("%-4.3i|\n", 3);
	ft_printf("%-4.3i|\n", 3);
	printf("%.3d|\n", 3);
	ft_printf("%.3d|\n", 3);
	printf("%.3d|\n", 3);
	ft_printf("%.3d|\n", 3);
	printf("%.6d|\n", 3);
	ft_printf("%.6d|\n", 3);
	printf("%2.6d|\n", 3);
	ft_printf("%2.6d|\n", 3);
	printf("%2.6d|\n", 332);
	ft_printf("%2.6d|\n", 332);
	printf("%2.6d|\n", 332332);
	ft_printf("%2.6d|\n", 332332);
	printf("%2.6d|\n", 3323323);
	ft_printf("%2.6d|\n", 3323323);
	printf("%*.*d|\n", 6, 3, 56);
	ft_printf("%*.*d|\n", 6, 3, 56);
	printf("%d|\n", -2147483647);
	ft_printf("%d|\n", -2147483647);
	printf("%d|\n", -2147483647);
	ft_printf("%d|\n", -2147483647);
	//
	//teste com p
	printf("%s", "TESTE COM P: \n");
	printf("%-20p|\n", &a);
	ft_printf("%-20p|\n", &a);
	printf("%*p|\n", -20, &a);
	ft_printf("%*p|\n", -20, &a);
	//printf("%020p|\n", &a); } undefined behavior
	//ft_printf("%020p|\n", &a) }; undefined behavior
	printf("%p|\n", &a);
	ft_printf("%p|\n", &a);
	printf("%15p|\n", &a);
	ft_printf("%15p|\n", &a);
	//printf("%.20p|\n", &a); } undefined behavior
	//ft_printf("%.20p|\n", &a); } undefined behavior
	//
	//teste com u
	printf("%s", "TESTE COM U: \n");
	printf("%*u|\n", -3, -3);
	ft_printf("%*u|\n", -3, -3);
	printf("%3u|\n", 3);
	ft_printf("%3u|\n", 3);
	printf("%3.3u|\n", 3);
	ft_printf("%3.3u|\n", 3);
	printf("%-3.3u|\n", 3);
	ft_printf("%-3.3u|\n", 3);
	printf("%04.3u|\n", 3);
	ft_printf("%04.3u|\n", 3);
	printf("%-4.3u|\n", 3);
	ft_printf("%-4.3u|\n", 3);
	printf("%.3u|\n", 3);
	ft_printf("%.3u|\n", 3);
	printf("%.3u|\n", 3);
	ft_printf("%.3u|\n", 3);
	printf("%.6u|\n", 3);
	ft_printf("%.6u|\n", 3);
	printf("%2.6u|\n", 3);
	ft_printf("%2.6u|\n", 3);
	printf("%2.6u|\n", 332);
	ft_printf("%2.6u|\n", 332);
	printf("%2.6u|\n", 332332);
	ft_printf("%2.6u|\n", 332332);
	printf("%2.6u|\n", 3323323);
	ft_printf("%2.6u|\n", 3323323);
	printf("%*.*u|\n", 6, 3, 56);
	ft_printf("%*.*u|\n", 6, 3, 56);
	printf("%u|\n", 2147483647);
	ft_printf("%u|\n", 2147483647);
	printf("%u|\n", -2147483647);
	ft_printf("%u|\n", -2147483647);*/

	ft_printf("%x|\n", 4294967295u);
	printf("%x|\n", 4294967295u);
	
	return (0);
}