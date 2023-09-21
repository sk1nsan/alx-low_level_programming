#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds an element to the end of linked list
 *
 * @head: first node
 * @str: string to be copied
 *
 * Return: linked list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *end = *head;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = NULL;
	new->str = strdup(str);
	new->len = strlen(str);
	if (!(*head))
	{
		*head = new;
		return (new);
	}
	while (end->next)
		end = end->next;
	end->next = new;
	return (new);
}
