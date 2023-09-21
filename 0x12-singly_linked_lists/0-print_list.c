#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints all elements of linked list
 *
 * @h: linked list
 *
 * Return: Number of elements
 */

size_t print_list(const list_t *h)
{
	int n = 0;

	while (1)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%ld] %s\n", strlen(h->str), h->str);
		n++;
		if (h->next == NULL)
			break;
		h = h->next;
	}
	return (n);
}
