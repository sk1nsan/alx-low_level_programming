#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * print_listint_safe - prints all elements of linked list
 *
 * @head: linked list
 *
 * Return: Number of elements
 */

size_t print_listint_safe(const listint_t *head)
{
	int n = 0, i;
	const listint_t *x[100];

	if (head == NULL)
		exit(98);
	while (1)
	{
		for (i = 0; i < n; i++)
		{
			if (x[i]  == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (n);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		x[n] = head;
		n++;
		if (head->next == NULL)
			return (n);
		head = head->next;
	}
}
