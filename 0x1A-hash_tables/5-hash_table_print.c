#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * hash_table_print - print hashtable
 *
 * @ht: hashtable
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size;
	unsigned long int i;
	hash_node_t *curr;
	int key = 1;

	if (ht == NULL)
		return;
	size = ht->size;
	printf("{");
	for (i = 0; i < size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			if (key == 1)
			{
				printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
				key = 0;
			}
			printf(", '%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			curr = curr->next;

		}

	}
	printf("}\n");
}
