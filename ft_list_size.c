/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Teghjyot <tesingh@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:37:56 by Teghjyot          #+#    #+#             */
/*   Updated: 2024/03/06 15:37:56 by Teghjyot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_list_size(t_list *begin_list)
{
    size_t  count;

	count = 0;
    while (begin_list)
    {
		count++;
        begin_list = begin_list->next;
    }
    return (count);
}
