/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Teghjyot <tesingh@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:37:56 by Teghjyot          #+#    #+#             */
/*   Updated: 2024/03/06 15:37:56 by Teghjyot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list;

	list = ft_list_last(*begin_list);
	if (list)
		list->next = ft_create_elem(data);
	else
		*begin_list = ft_create_elem(data);
}
