#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds an element to the linked list
 *
 * @head: first node
 * @n: int to be copied
 *
 * Return: linked list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head || !(*head))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	*head = new;
	return (new);
}
