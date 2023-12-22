#include "hash_tables.h"
/**
 * key_index - return key of index using djb2 hash function
 *
 * @key: key
 * @size: size of hashtable
 *
 * Return: index of key given
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
