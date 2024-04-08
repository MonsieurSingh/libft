/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Teghjyot <tesingh@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:37:56 by Teghjyot          #+#    #+#             */
/*   Updated: 2024/03/06 15:37:56 by Teghjyot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_foreach_if(t_list *begin_list,
						void (*f)(void *),
						void *data_ref,
						int (*cmp)(void *, void *))
{
	t_list	*current;
	t_list	*next;

	current = begin_list;
	while (current)
	{
		next = current->next;
		if ((*cmp)(current->data, data_ref) == 0)
			(*f)(current->data);
		current = next;
	}
}
