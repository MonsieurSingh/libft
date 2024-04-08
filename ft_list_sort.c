/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Teghjyot <tesingh@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:37:56 by Teghjyot          #+#    #+#             */
/*   Updated: 2024/03/06 15:37:56 by Teghjyot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)(void *, void *))
{
	t_list	*current;
	t_list	*next;
	t_list	*recurrent;

	next = NULL;
	recurrent = NULL;
	current = *begin_list;
	while (current) {
		recurrent = *begin_list;
		while (recurrent && recurrent->next)
		{
			next = recurrent->next;
			if ((*cmp)(recurrent->data, next->data) > 0)
				ft_list_swap(recurrent);
			recurrent = recurrent->next;
		}
		current = current->next;
	}
}
