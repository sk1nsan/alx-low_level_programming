#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds an element to the linked list
 *
 * @head: first node
 * @str: string to be copied
 *
 * Return: linked list
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	
	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->next = *head;
	new->str = strdup(str);
	new->len = strlen(str);
	*head = new;
	return (new);
}
