#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - return the node at index
 *
 * @head: linked list
 * @index: index of node
 *
 * Return: node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (index--)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
