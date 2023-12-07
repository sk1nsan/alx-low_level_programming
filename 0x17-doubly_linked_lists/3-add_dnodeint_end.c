#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds an element to the end of linked list
 *
 * @head: first node
 * @n: int to be copied
 *
 * Return: linked list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->n = n;
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	while (end->next)
		end = end->next;
	end->next = new;
	new->prev = end;
	return (new);
}
