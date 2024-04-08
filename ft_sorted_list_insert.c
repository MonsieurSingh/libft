/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Teghjyot <tesingh@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:37:56 by Teghjyot          #+#    #+#             */
/*   Updated: 2024/03/06 15:37:56 by Teghjyot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_sorted_list_insert(t_list **begin_list,
						   void *data,
						   int (*cmp)(void *, void *))
{
	t_list	*list;

	list = ft_list_find(*begin_list, data, cmp);
	if (list)
		list->next = ft_create_elem(data);
	else
		*begin_list = ft_create_elem(data);

}
