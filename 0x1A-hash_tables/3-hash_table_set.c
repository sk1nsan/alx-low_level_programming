#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - set the hashnode to its index in hash table
 *
 * @ht: hashtable
 * @key: key of the hashnode
 * @value: value of hashnode
 *
 * Return: 1 if succ
 * 0 otherwise
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *hash_node;
	hash_node_t *curr;

	if (!ht || ht->size == 0 || key[0] == '\0')
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[index];
	while (curr)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			if (curr->value == NULL)
				return (0);
			return (1);
		}
		curr = curr->next;
	}
	hash_node = malloc(sizeof(hash_node_t));
	if (hash_node == NULL)
		return (0);
	hash_node->key = (char *)key;
	hash_node->value = strdup(value);
	if (!hash_node->value)
	{
		free(hash_node->value);
		free(hash_node);
		return (0);
	}
	if ((ht->array[index]) == NULL)
	{
		ht->array[index] = hash_node;
		hash_node->next = NULL;
		return (1);
	}
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);
}
