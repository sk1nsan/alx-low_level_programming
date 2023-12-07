#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at index
 *
 * @head: linked list
 * @index: index of new node
 *
 * Return: 1 if successful
 *	-1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *itr = *head, *del;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		if (itr == NULL)
			return (-1);
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(itr);
		return (1);
	}
	while (i <= index)
	{
		if (itr->next == NULL)
			return (-1);
		if (i == index - 1)
		{
			del = itr->next;
			((itr->next)->next)->prev = itr;
			itr->next = (itr->next)->next;
			free(del);
			return (1);
		}
		itr = itr->next;
		i++;
	}
	return (-1);
}
