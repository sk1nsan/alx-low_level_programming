#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inset  node at index
 *
 * @head: linked list
 * @idx: index of new node
 * @n: int of new node
 *
 * Return: new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *old, *itr = *head;

	if (head == NULL)
		return (NULL);
	if (itr == NULL)
	{
		if (idx == 0)
		{
			idx->n = n;
			idx->next = NULL;
			return (idx);
		}
		return (NULL);
	}
	while (i <= idx)
	{
		if (itr->next == NULL && i != idx)
			return (NULL);
		if (i == idx)
		{
			new = malloc(sizeof(listint_t));
			old = malloc(sizeof(listint_t));
			if (new == NULL || old == NULL)
				return (NULL);
			old->n = itr->n;
			old->next = itr->next;
			new = itr;
			new->n = n;
			new->next = old;
			return (new);
		}
		itr = itr->next;
		i++;
	}
	return (NULL);
}
