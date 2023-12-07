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
	unsigned int i = 0;
	dlistint_t *new, *itr = *h;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		new->next = *h;
		new->n = n;
		*h = new;
		return (new);
	}
	if (itr == NULL)
		return (NULL);

	while (i <= idx)
	{
		if (itr == NULL)
			return (NULL);
		if (i == idx - 1)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);
			new->next = itr->next;
			new->n = n;
			itr->next = new;
			return (new);
		}
		itr = itr->next;
		i++;
	}
	return (NULL);
}
