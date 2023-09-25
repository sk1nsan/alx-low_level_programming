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
	listint_t *new, *itr = *head;

	if (head == NULL)
		return (NULL);
	if (idx == 0)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);
		new->next = *head;
		new->n = n;
		*head = new;
		return (new);
	}
	if (itr == NULL)
		return (NULL);

	while (i <= idx)
	{
		if (itr->next == NULL && i != idx)
			return (NULL);
		if (i == idx - 1)
		{
			new = malloc(sizeof(listint_t));
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
