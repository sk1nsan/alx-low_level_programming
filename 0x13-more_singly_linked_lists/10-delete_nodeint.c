#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inset  node at index
 *
 * @head: linked list
 * @idx: index of new node
 * @n: int of new node
 *
 * Return: new node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *itr = *head, *del;

	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		if (itr == NULL)
			return (-1);
		*head = (*head)->next;
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
			itr->next = (itr->next)->next;
			free(del);
			return (1);
		}
		itr = itr->next;
		i++;
	}
	return (-1);
}
