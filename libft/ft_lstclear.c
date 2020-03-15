/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caio <caio@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/30 18:37:32 by csouza-f          #+#    #+#             */
/*   Updated: 2020/03/14 14:53:41 by caio             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *tempnext;

	temp = *lst;
	while (temp)
	{
		tempnext = temp->next;
		del(temp->content);
		free(temp);
		temp = temp->next;
	}
	*lst = 0;
}
