#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - removes first element of the linked list
 *
 * @head: first node
 *
 * Return: n of the element removed
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *del;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	del = *head;
	*head = (*head)->next;
	free(del);
	return (n);
}
