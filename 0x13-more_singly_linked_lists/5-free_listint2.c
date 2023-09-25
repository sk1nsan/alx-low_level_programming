#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_listint2 - frees linked list
 *
 * @head: first node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *del;

	if (head == NULL)
		return;
	if (*head == NULL)
	{
		free(*head);
		return;
	}
	while (*head != NULL)
	{
		if ((*head)->next == NULL)
		{
			free(*head);
			*head = NULL;
			return;
		}
		del = *head;
		*head = (*head)->next;
		free(del);
	}
}
