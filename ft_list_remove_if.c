//
//  ft_list_remove_if.c
//  ft
//
//  Created by TeeJay on 9/4/2024.
//

#include "libft.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void *), void (*free_fct)(void *))
{
	t_list	*previous;
	t_list	*current;
	t_list	*next;

	previous = NULL;
	current = *begin_list;
	while (current)
	{
		next = current->next;
		if ((*cmp)(current->data, data_ref) == 0) {
			if (previous)
				previous->next = next;
			else
				*begin_list = next;
			(*free_fct)(current->data);
			free(current);
			current = next;
		}
		else
		{
			previous = current;
			current = next;
		}
	}
}
