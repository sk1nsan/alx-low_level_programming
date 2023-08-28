#include <stdio.h>

/**
 * print_diagsums- prints sums of diagonals
 *
 * @a: array to be summed
 * @size: size of 2D square array
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, result = 0;

	for (i = 0; i < size; i++)
		result += a[i * (size + 1)];
	printf("%d, ", result);
	result = 0;
	for (j = 0; j < size; j++)
		result += a[(j + 1) * (size - 1)];
	printf("%d\n", result);


}
