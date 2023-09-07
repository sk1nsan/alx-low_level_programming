#include <stdlib.h>
#include <stdio.h>

/**
 * _recalloc - reallocates memory
 *
 * @ptr: pointer to previous memory
 * @old_size: old size of memory
 * @new_size: new size of memory
 *
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x;
	unsigned int i;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);
	x = malloc(new_size);
	for (i = 0; i < old_size; i++)
		x[i] = *((char *)ptr + i);
	free(ptr);
	return (x);

}
