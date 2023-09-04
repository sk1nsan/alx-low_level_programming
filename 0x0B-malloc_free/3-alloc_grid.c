#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * @width: width of grid
 * @height: height of grid
 *
 * Return: pointer to the grid
 * or NULL if it fails
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **x;

	if (width < 1 || height < 1)
		return (NULL);
	x = malloc(width * sizeof(int *));
	if (x == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		x[i] = malloc(height * sizeof(int));
		if (x[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(x[j]);
			free(x);
			return (NULL);
		}
	}
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			x[i][j] = 0;
	}
	return (x);
}
