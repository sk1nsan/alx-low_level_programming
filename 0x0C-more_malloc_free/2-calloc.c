#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array,
 *
 * @nmemb: number of elements
 * @size: size of element
 *
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(nmemb * size);
	if (x == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		x[i] = 0;
	return (x);
}
