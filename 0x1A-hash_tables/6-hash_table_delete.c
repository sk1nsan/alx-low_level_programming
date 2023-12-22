#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * free_index - free entire index
 *
 * @head: head of index
 *
 *
*/
void free_index(hash_node_t *head)
{
	hash_node_t *del;

	if (head == NULL)
	{
		free(head);
		return;
	}
	while (head != NULL)
	{
		if (head->next == NULL)
		{
			free(head->value);
			free(head);
			return;
		}
		del = head;
		head = head->next;
		free(del->value);
		free(del);
	}
}


/**
 * hash_table_delete - delete hashtable
 *
 * @ht: hashtable
 *
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size;
	unsigned long int i;
	hash_node_t *curr;

	if (ht == NULL)
		return;
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		curr = ht->array[i];
		free_index(curr);

	}
	free(ht->array);
	free(ht);

}
