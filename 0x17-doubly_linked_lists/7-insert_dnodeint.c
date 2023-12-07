#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inset  node at index
 *
 * @h: linked list
 * @idx: index of new node
 * @n: int of new node
 *
 * Return: new node
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *itr = *h;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (--idx)
	{
		if (itr == NULL)
			return (NULL);
		itr = itr->next;
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->next = itr->next;
	new->n = n;
	new->prev = itr;
	if (new->next)
		(new->next)->prev = new;
	itr->next = new;
	return (new);
}
