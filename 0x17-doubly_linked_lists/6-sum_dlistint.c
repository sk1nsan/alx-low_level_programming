#include <stdio.h>
#include "lists.h"


/**
 * sum_dlistint - return sum of n
 *
 * @head: linked list
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (1)
	{
		sum += head->n;
		if (head->next == NULL)
			return (sum);
		head = head->next;
	}
}
