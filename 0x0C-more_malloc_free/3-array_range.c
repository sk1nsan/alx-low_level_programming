#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers.
 *
 * @min: minimum number
 * @max: max number
 *
 * Return: pointer to memory
 */

int *array_range(int min, int max)
{
	int *x;
	int i, j;

	if (min > max)
		return (NULL);

	x = malloc((max - min + 1) * sizeof(int));
	if (x == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max; i++, j++)
		x[j] = i;
	return (x);
}
