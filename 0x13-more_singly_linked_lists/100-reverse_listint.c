#include "lists.h"

/**
 * reverse_listint - reverse linked list
 *
 * @head: linked list
 *
 * Return: reversed linked list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *x = *head, *y = *head;

	if (head == NULL)
		return (NULL);
	if (*head == NULL)
		return (*head);
	x = (*head)->next;
	(*head)->next = NULL;
	while (1)
	{
		if (x == NULL)
			return (*head);
		y = x->next;
		x->next = *head;
		if (y == NULL)
		{
			*head = x;
			return (x);
		}
		*head = y->next;
		y->next = x;
		if (*head == NULL)
		{
			*head = y;
			return (y);
		}
		x = (*head)->next;
		(*head)->next = y;
	}
}
