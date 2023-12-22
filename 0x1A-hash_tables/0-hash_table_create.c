#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - create hash table
 *
 * @size: size of hashtable
 *
 * Return: hashtable
 * or NULL if error
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;


	hash = malloc(sizeof(hash_table_t));
	if (!hash)
		return (NULL);
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (!(hash->array))
		return (NULL);
	return (hash);
}
