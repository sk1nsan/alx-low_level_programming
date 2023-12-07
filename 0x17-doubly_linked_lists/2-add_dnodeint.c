#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds an element at the beginning of the linked list
 *
 * @head: first node
 * @n: int to be copied
 *
 * Return: linked list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->prev = NULL;
	new->n = n;
	(*head)->prev = new;
	*head = new;
	return (new);
}
