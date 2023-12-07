#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all elements of linked list
 *
 * @h: linked list
 *
 * Return: Number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int n = 0;

	if (h == NULL)
		return (0);
	while (1)
	{
		printf("%d\n", h->n);
		n++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (n);
}
