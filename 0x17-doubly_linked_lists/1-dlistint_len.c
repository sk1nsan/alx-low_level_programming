#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - returns number of  elements in linked list
 *
 * @h: linked list
 *
 * Return: Number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	int n = 0;

	if (h == NULL)
		return (0);
	while (1)
	{
		n++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (n);
}
