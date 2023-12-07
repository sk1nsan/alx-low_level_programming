#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - frees linked list
 *
 * @head: first node
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *del;

	if (head == NULL)
	{
		free(head);
		return;
	}
	while (head != NULL)
	{
		if (head->next == NULL)
		{
			free(head);
			return;
		}
		del = head;
		head = head->next;
		free(del);
	}
}
