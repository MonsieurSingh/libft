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

t_list  *ft_list_last(t_list *begin_list)
{
	if (!begin_list)
		return NULL;
	while (begin_list->next)
		begin_list = begin_list->next;
	return (begin_list);
}
