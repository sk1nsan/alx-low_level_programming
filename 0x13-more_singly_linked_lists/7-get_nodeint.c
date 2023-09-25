#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return the node at index
 *
 * @head: linked list
 * @index: index of node
 *
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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
