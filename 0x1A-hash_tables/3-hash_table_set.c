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

	if (ht == NULL)
		return (0);
	if (ht->size == 0)
		return (0);
	if (key[0] == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	hash_node = malloc(sizeof(hash_node_t));
	if (!hash_node)
		return (0);

	hash_node->key = (char *)key;
	hash_node->value = strdup(value);

	if (!(ht->array[index]))
	{
		ht->array[index] = hash_node;
		hash_node->next = NULL;
		return (1);
	}
	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;
	return (1);



}
