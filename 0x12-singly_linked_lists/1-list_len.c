#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * list_len - returns number of  elements in linked list
 *
 * @h: linked list
 *
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
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
