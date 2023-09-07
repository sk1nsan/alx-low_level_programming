#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: number or bytes to be allocated
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *x;

	x = malloc (b);
	if (x == NULL)
		exit(98);
	return (x);
}
