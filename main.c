#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

void ft_list_reverse_fun(t_list *begin_list)
{
	int		n;
	int		i;
	int		j;
	t_list	*current;
	void	*tmp;

	n = (int)ft_list_size(begin_list);
	i = 0;
	while (i < (n - 1))
	{
		j = i;
		current = begin_list;
		while (current && current->next && j < (n - 1))
		{
			tmp = current->data;
			current->data = current->next->data;
			current->next->data = tmp;
			current = current->next;
			j++;
		}
		i++;
	}
}

void    ft_list_reverse(t_list **begin_list)
{
    t_list  *previous;
    t_list  *current;
    t_list  *next;

    previous = NULL;
    next = NULL;
    current = *begin_list;
    while (current)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }
    *begin_list = previous;
}

t_list  *create_node(void *data)
{
    t_list  *node = malloc(sizeof(t_list));
    if (node)
    {
        node->data = data;
        node->next = NULL;
    }
    return node;
}

void print_list(t_list *list)
{
	while (list)
	{
		printf("Data: %d (%p), Next: %p\n", *(int *)list->data, (int *)list->data, (void *)list->next);
		list = list->next;
	}
}
int main()
{
    // Create a linked list
    t_list *head = create_node((void *)malloc(sizeof(int)));
    *(int *)head->data = 1;
    head->next = create_node((void *)malloc(sizeof(int)));
    *(int *)head->next->data = 2;
    head->next->next = create_node((void *)malloc(sizeof(int)));
    *(int *)head->next->next->data = 3;
    head->next->next->next = create_node((void *)malloc(sizeof(int)));
    *(int *)head->next->next->next->data = 5;

    printf("Original List:\n");
    print_list(head);

	// Reverse the list using ft_list_reverse
	ft_list_reverse(&head);
	printf("\nAfter Reverse (ft_list_reverse):\n");
	print_list(head);
	
    // Reverse the list using ft_list_reverse_fun
    ft_list_reverse_fun(head);
    printf("\nAfter Reverse (ft_list_reverse_fun):\n");
    print_list(head);


    return 0;
}

