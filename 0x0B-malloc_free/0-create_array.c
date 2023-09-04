#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of array
 * @c: char to be filled with
 *
 * Return: pointer to the array
 * or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x = malloc(size * sizeof(c));

	if (x == NULL || size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		x[i] = c;
	return (x);

}
