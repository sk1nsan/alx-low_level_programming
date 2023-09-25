#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_nodeint_end - adds an element to the end of linked list
 *
 * @head: first node
 * @n: int to be copied
 *
 * Return: linked list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *end = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
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
	return (new);
}
