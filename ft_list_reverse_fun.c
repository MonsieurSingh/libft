/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Teghjyot <tesingh@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:37:56 by Teghjyot          #+#    #+#             */
/*   Updated: 2024/03/06 15:37:56 by Teghjyot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_list_reverse_fun(t_list *begin_list)
{
	int		list_size;
	int		i;
	int		j;
	t_list	*current;

	list_size = (int)ft_list_size(begin_list);
	i = 0;
	while (i < (list_size - 1))
	{
		j = i;
		current = begin_list;
		while (current && current->next && j < (list_size - 1))
		{
			ft_list_swap(current);
			current = current->next;
			j++;
		}
		i++;
	}
}
