/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Teghjyot <tesingh@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:37:56 by Teghjyot          #+#    #+#             */
/*   Updated: 2024/03/06 15:37:56 by Teghjyot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_list_find(t_list *begin_list,
					 void *data_ref,
					 int (*cmp)(void *, void *))
{
	t_list	*current;
	t_list	*next;

	current = begin_list;
	while (current)
	{
		next = current->next;
		if ((*cmp)(current, data_ref) == 0)
			return (current);
		current = next;
	}
	return (NULL);
}
