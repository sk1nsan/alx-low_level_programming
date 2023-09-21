#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees linked list
 *
 * @head: first node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *del;

	if (head == NULL)
	{
		free(head);
		return;
	}
	while (head != NULL)
	{
		if (head->next == NULL)
		{
			free(head->str);
			free(head);
			return;
		}
		del = head;
		head = head->next;
		free(del->str);
		free(del);
	}
}
