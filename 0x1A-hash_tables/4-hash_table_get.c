#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_get - get value of the key given
 *
 * @ht: hashtable
 * @key: key
 *
 * Return: value of the key
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *curr;

	if (ht == NULL)
		return (NULL);
	if (ht->size == 0)
		return (NULL);
	if (key[0] == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	curr = ht->array[index];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;

	}
	return (NULL);

}
